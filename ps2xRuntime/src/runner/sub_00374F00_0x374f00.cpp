#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374F00
// Address: 0x374f00 - 0x375038
void sub_00374F00_0x374f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374F00_0x374f00");
#endif

    switch (ctx->pc) {
        case 0x374f3cu: goto label_374f3c;
        case 0x374f44u: goto label_374f44;
        case 0x374f58u: goto label_374f58;
        case 0x374f60u: goto label_374f60;
        case 0x374f74u: goto label_374f74;
        case 0x374f8cu: goto label_374f8c;
        case 0x374f94u: goto label_374f94;
        case 0x374fa8u: goto label_374fa8;
        case 0x374fbcu: goto label_374fbc;
        case 0x374fd0u: goto label_374fd0;
        case 0x374fe4u: goto label_374fe4;
        case 0x375008u: goto label_375008;
        default: break;
    }

    ctx->pc = 0x374f00u;

    // 0x374f00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x374f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x374f04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374f08: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x374f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x374f0c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x374f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x374f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x374f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f18: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x374f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x374f1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x374f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x374f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f24: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x374f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x374f28: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x374f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x374f2c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x374f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x374f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374f34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374F34u;
    SET_GPR_U32(ctx, 31, 0x374F3Cu);
    ctx->pc = 0x374F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F34u;
    // 0x374f38: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374F34u, 0x374F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F3Cu;
label_374f3c:
    // 0x374f3c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374F3Cu;
    SET_GPR_U32(ctx, 31, 0x374F44u);
    ctx->pc = 0x374F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F3Cu;
    // 0x374f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374F3Cu, 0x374F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F44u;
label_374f44:
    // 0x374f44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f48: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x374f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374f50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374F50u;
    SET_GPR_U32(ctx, 31, 0x374F58u);
    ctx->pc = 0x374F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F50u;
    // 0x374f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374F50u, 0x374F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F58u;
label_374f58:
    // 0x374f58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374F58u;
    SET_GPR_U32(ctx, 31, 0x374F60u);
    ctx->pc = 0x374F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F58u;
    // 0x374f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374F58u, 0x374F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F60u;
label_374f60:
    // 0x374f60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x374f60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374f6c: 0xc102488  jal         func_409220
    ctx->pc = 0x374F6Cu;
    SET_GPR_U32(ctx, 31, 0x374F74u);
    ctx->pc = 0x374F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F6Cu;
    // 0x374f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374F6Cu, 0x374F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F74u;
label_374f74:
    // 0x374f74: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x374f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x374f78: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374f7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x374f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374f84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374F84u;
    SET_GPR_U32(ctx, 31, 0x374F8Cu);
    ctx->pc = 0x374F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F84u;
    // 0x374f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374F84u, 0x374F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F8Cu;
label_374f8c:
    // 0x374f8c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374F8Cu;
    SET_GPR_U32(ctx, 31, 0x374F94u);
    ctx->pc = 0x374F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F8Cu;
    // 0x374f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374F8Cu, 0x374F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F94u;
label_374f94:
    // 0x374f94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x374f94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x374f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f9c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x374f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x374fa0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374FA0u;
    SET_GPR_U32(ctx, 31, 0x374FA8u);
    ctx->pc = 0x374FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FA0u;
    // 0x374fa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374FA0u, 0x374FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FA8u;
label_374fa8:
    // 0x374fa8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x374fa8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374fb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x374fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x374fb4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374FB4u;
    SET_GPR_U32(ctx, 31, 0x374FBCu);
    ctx->pc = 0x374FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FB4u;
    // 0x374fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374FB4u, 0x374FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FBCu;
label_374fbc:
    // 0x374fbc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x374fbcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374fc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x374fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x374fc8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374FC8u;
    SET_GPR_U32(ctx, 31, 0x374FD0u);
    ctx->pc = 0x374FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FC8u;
    // 0x374fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374FC8u, 0x374FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FD0u;
label_374fd0:
    // 0x374fd0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x374fd0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374fd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x374fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374fdc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x374FDCu;
    SET_GPR_U32(ctx, 31, 0x374FE4u);
    ctx->pc = 0x374FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FDCu;
    // 0x374fe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x374FDCu, 0x374FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FE4u;
label_374fe4:
    // 0x374fe4: 0x2502b  sltu        $t2, $zero, $v0
    ctx->pc = 0x374fe4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374fe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x374fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374fec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x374fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ff0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x374ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ff4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x374ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374ff8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x374ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ffc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x374ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375000: 0xc0c57f2  jal         func_315FC8
    ctx->pc = 0x375000u;
    SET_GPR_U32(ctx, 31, 0x375008u);
    ctx->pc = 0x375004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375000u;
    // 0x375004: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315FC8u, 0x375000u, 0x375008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375008u;
label_375008:
    // 0x375008: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x375008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37500c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37500cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375010: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x375010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375014: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x375014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375018: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x375018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37501c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37501cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375020: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x375020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375024: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x375024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37502c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x37502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375030: 0x3e00008  jr          $ra
    ctx->pc = 0x375030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375030u;
        // 0x375034: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375038u;
}
