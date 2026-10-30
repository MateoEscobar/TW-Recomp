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

// Function: sub_00374CD0
// Address: 0x374cd0 - 0x374d90
void sub_00374CD0_0x374cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374CD0_0x374cd0");
#endif

    switch (ctx->pc) {
        case 0x374d00u: goto label_374d00;
        case 0x374d08u: goto label_374d08;
        case 0x374d1cu: goto label_374d1c;
        case 0x374d24u: goto label_374d24;
        case 0x374d38u: goto label_374d38;
        case 0x374d40u: goto label_374d40;
        case 0x374d54u: goto label_374d54;
        case 0x374d68u: goto label_374d68;
        default: break;
    }

    ctx->pc = 0x374cd0u;

    // 0x374cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x374cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x374cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374cd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x374cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x374cdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x374cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x374ce0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x374ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374cec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x374cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x374cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374cf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374CF8u;
    SET_GPR_U32(ctx, 31, 0x374D00u);
    ctx->pc = 0x374CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374CF8u;
    // 0x374cfc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374CF8u, 0x374D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D00u;
label_374d00:
    // 0x374d00: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374D00u;
    SET_GPR_U32(ctx, 31, 0x374D08u);
    ctx->pc = 0x374D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D00u;
    // 0x374d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374D00u, 0x374D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D08u;
label_374d08:
    // 0x374d08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x374d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374d14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374D14u;
    SET_GPR_U32(ctx, 31, 0x374D1Cu);
    ctx->pc = 0x374D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D14u;
    // 0x374d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374D14u, 0x374D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D1Cu;
label_374d1c:
    // 0x374d1c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374D1Cu;
    SET_GPR_U32(ctx, 31, 0x374D24u);
    ctx->pc = 0x374D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D1Cu;
    // 0x374d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374D1Cu, 0x374D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D24u;
label_374d24:
    // 0x374d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374d30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374D30u;
    SET_GPR_U32(ctx, 31, 0x374D38u);
    ctx->pc = 0x374D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D30u;
    // 0x374d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374D30u, 0x374D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D38u;
label_374d38:
    // 0x374d38: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374D38u;
    SET_GPR_U32(ctx, 31, 0x374D40u);
    ctx->pc = 0x374D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D38u;
    // 0x374d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374D38u, 0x374D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D40u;
label_374d40:
    // 0x374d40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x374d40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x374d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374d4c: 0xc102488  jal         func_409220
    ctx->pc = 0x374D4Cu;
    SET_GPR_U32(ctx, 31, 0x374D54u);
    ctx->pc = 0x374D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D4Cu;
    // 0x374d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374D4Cu, 0x374D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D54u;
label_374d54:
    // 0x374d54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x374d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x374d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x374d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d60: 0xc0c5792  jal         func_315E48
    ctx->pc = 0x374D60u;
    SET_GPR_U32(ctx, 31, 0x374D68u);
    ctx->pc = 0x374D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D60u;
    // 0x374d64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x315E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315E48u, 0x374D60u, 0x374D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D68u;
label_374d68:
    // 0x374d68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x374d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x374d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374d74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374d78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x374d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374d80: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x374d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374d84: 0x3e00008  jr          $ra
    ctx->pc = 0x374D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D84u;
        // 0x374d88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374D8Cu;
    // 0x374d8c: 0x0  nop
    ctx->pc = 0x374d8cu;
    // NOP
    ctx->pc = 0x374d90u;
}
