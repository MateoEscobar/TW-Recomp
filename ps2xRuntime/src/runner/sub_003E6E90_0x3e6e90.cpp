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

// Function: sub_003E6E90
// Address: 0x3e6e90 - 0x3e6fd8
void sub_003E6E90_0x3e6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6E90_0x3e6e90");
#endif

    switch (ctx->pc) {
        case 0x3e6e90u: goto label_3e6e90;
        case 0x3e6e94u: goto label_3e6e94;
        case 0x3e6e98u: goto label_3e6e98;
        case 0x3e6e9cu: goto label_3e6e9c;
        case 0x3e6ea0u: goto label_3e6ea0;
        case 0x3e6ea4u: goto label_3e6ea4;
        case 0x3e6ea8u: goto label_3e6ea8;
        case 0x3e6eacu: goto label_3e6eac;
        case 0x3e6eb0u: goto label_3e6eb0;
        case 0x3e6eb4u: goto label_3e6eb4;
        case 0x3e6eb8u: goto label_3e6eb8;
        case 0x3e6ebcu: goto label_3e6ebc;
        case 0x3e6ec0u: goto label_3e6ec0;
        case 0x3e6ec4u: goto label_3e6ec4;
        case 0x3e6ec8u: goto label_3e6ec8;
        case 0x3e6eccu: goto label_3e6ecc;
        case 0x3e6ed0u: goto label_3e6ed0;
        case 0x3e6ed4u: goto label_3e6ed4;
        case 0x3e6ed8u: goto label_3e6ed8;
        case 0x3e6edcu: goto label_3e6edc;
        case 0x3e6ee0u: goto label_3e6ee0;
        case 0x3e6ee4u: goto label_3e6ee4;
        case 0x3e6ee8u: goto label_3e6ee8;
        case 0x3e6eecu: goto label_3e6eec;
        case 0x3e6ef0u: goto label_3e6ef0;
        case 0x3e6ef4u: goto label_3e6ef4;
        case 0x3e6ef8u: goto label_3e6ef8;
        case 0x3e6efcu: goto label_3e6efc;
        case 0x3e6f00u: goto label_3e6f00;
        case 0x3e6f04u: goto label_3e6f04;
        case 0x3e6f08u: goto label_3e6f08;
        case 0x3e6f0cu: goto label_3e6f0c;
        case 0x3e6f10u: goto label_3e6f10;
        case 0x3e6f14u: goto label_3e6f14;
        case 0x3e6f18u: goto label_3e6f18;
        case 0x3e6f1cu: goto label_3e6f1c;
        case 0x3e6f20u: goto label_3e6f20;
        case 0x3e6f24u: goto label_3e6f24;
        case 0x3e6f28u: goto label_3e6f28;
        case 0x3e6f2cu: goto label_3e6f2c;
        case 0x3e6f30u: goto label_3e6f30;
        case 0x3e6f34u: goto label_3e6f34;
        case 0x3e6f38u: goto label_3e6f38;
        case 0x3e6f3cu: goto label_3e6f3c;
        case 0x3e6f40u: goto label_3e6f40;
        case 0x3e6f44u: goto label_3e6f44;
        case 0x3e6f48u: goto label_3e6f48;
        case 0x3e6f4cu: goto label_3e6f4c;
        case 0x3e6f50u: goto label_3e6f50;
        case 0x3e6f54u: goto label_3e6f54;
        case 0x3e6f58u: goto label_3e6f58;
        case 0x3e6f5cu: goto label_3e6f5c;
        case 0x3e6f60u: goto label_3e6f60;
        case 0x3e6f64u: goto label_3e6f64;
        case 0x3e6f68u: goto label_3e6f68;
        case 0x3e6f6cu: goto label_3e6f6c;
        case 0x3e6f70u: goto label_3e6f70;
        case 0x3e6f74u: goto label_3e6f74;
        case 0x3e6f78u: goto label_3e6f78;
        case 0x3e6f7cu: goto label_3e6f7c;
        case 0x3e6f80u: goto label_3e6f80;
        case 0x3e6f84u: goto label_3e6f84;
        case 0x3e6f88u: goto label_3e6f88;
        case 0x3e6f8cu: goto label_3e6f8c;
        case 0x3e6f90u: goto label_3e6f90;
        case 0x3e6f94u: goto label_3e6f94;
        case 0x3e6f98u: goto label_3e6f98;
        case 0x3e6f9cu: goto label_3e6f9c;
        case 0x3e6fa0u: goto label_3e6fa0;
        case 0x3e6fa4u: goto label_3e6fa4;
        case 0x3e6fa8u: goto label_3e6fa8;
        case 0x3e6facu: goto label_3e6fac;
        case 0x3e6fb0u: goto label_3e6fb0;
        case 0x3e6fb4u: goto label_3e6fb4;
        case 0x3e6fb8u: goto label_3e6fb8;
        case 0x3e6fbcu: goto label_3e6fbc;
        case 0x3e6fc0u: goto label_3e6fc0;
        case 0x3e6fc4u: goto label_3e6fc4;
        case 0x3e6fc8u: goto label_3e6fc8;
        case 0x3e6fccu: goto label_3e6fcc;
        case 0x3e6fd0u: goto label_3e6fd0;
        case 0x3e6fd4u: goto label_3e6fd4;
        default: break;
    }

    ctx->pc = 0x3e6e90u;

label_3e6e90:
    // 0x3e6e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e6e94:
    // 0x3e6e94: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e6e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e6e98:
    // 0x3e6e98: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e6e9c:
    // 0x3e6e9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e6e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ea0:
    // 0x3e6ea0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e6ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e6ea4:
    // 0x3e6ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ea8:
    // 0x3e6ea8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e6ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e6eac:
    // 0x3e6eac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3e6eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3e6eb0:
    // 0x3e6eb0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3e6eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3e6eb4:
    // 0x3e6eb4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3e6eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e6eb8:
    // 0x3e6eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e6ebc:
    // 0x3e6ebc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e6ec0:
    // 0x3e6ec0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e6ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e6ec4:
    // 0x3e6ec4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e6ec8:
    // 0x3e6ec8: 0x40f809  jalr        $v0
label_3e6ecc:
    if (ctx->pc == 0x3E6ECCu) {
        ctx->pc = 0x3E6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EC8u;
        // 0x3e6ecc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6ED0u;
        goto label_3e6ed0;
    }
    ctx->pc = 0x3E6EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6ED0u);
        ctx->pc = 0x3E6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EC8u;
        // 0x3e6ecc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6EC8u, 0x3E6ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6ED0u;
label_3e6ed0:
    // 0x3e6ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ed4:
    // 0x3e6ed4: 0xc0ea146  jal         func_3A8518
label_3e6ed8:
    if (ctx->pc == 0x3E6ED8u) {
        ctx->pc = 0x3E6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6ED4u;
        // 0x3e6ed8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6EDCu;
        goto label_3e6edc;
    }
    ctx->pc = 0x3E6ED4u;
    SET_GPR_U32(ctx, 31, 0x3E6EDCu);
    ctx->pc = 0x3E6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6ED4u;
    // 0x3e6ed8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6ED4u, 0x3E6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EDCu;
label_3e6edc:
    // 0x3e6edc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e6edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ee0:
    // 0x3e6ee0: 0xc0ea13a  jal         func_3A84E8
label_3e6ee4:
    if (ctx->pc == 0x3E6EE4u) {
        ctx->pc = 0x3E6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EE0u;
        // 0x3e6ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6EE8u;
        goto label_3e6ee8;
    }
    ctx->pc = 0x3E6EE0u;
    SET_GPR_U32(ctx, 31, 0x3E6EE8u);
    ctx->pc = 0x3E6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EE0u;
    // 0x3e6ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6EE0u, 0x3E6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EE8u;
label_3e6ee8:
    // 0x3e6ee8: 0xc0ea146  jal         func_3A8518
label_3e6eec:
    if (ctx->pc == 0x3E6EECu) {
        ctx->pc = 0x3E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EE8u;
        // 0x3e6eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6EF0u;
        goto label_3e6ef0;
    }
    ctx->pc = 0x3E6EE8u;
    SET_GPR_U32(ctx, 31, 0x3E6EF0u);
    ctx->pc = 0x3E6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EE8u;
    // 0x3e6eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6EE8u, 0x3E6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EF0u;
label_3e6ef0:
    // 0x3e6ef0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e6ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ef4:
    // 0x3e6ef4: 0xc0ea13a  jal         func_3A84E8
label_3e6ef8:
    if (ctx->pc == 0x3E6EF8u) {
        ctx->pc = 0x3E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EF4u;
        // 0x3e6ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6EFCu;
        goto label_3e6efc;
    }
    ctx->pc = 0x3E6EF4u;
    SET_GPR_U32(ctx, 31, 0x3E6EFCu);
    ctx->pc = 0x3E6EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EF4u;
    // 0x3e6ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6EF4u, 0x3E6EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EFCu;
label_3e6efc:
    // 0x3e6efc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e6efcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e6f00:
    // 0x3e6f00: 0xc0ea146  jal         func_3A8518
label_3e6f04:
    if (ctx->pc == 0x3E6F04u) {
        ctx->pc = 0x3E6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F00u;
        // 0x3e6f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6F08u;
        goto label_3e6f08;
    }
    ctx->pc = 0x3E6F00u;
    SET_GPR_U32(ctx, 31, 0x3E6F08u);
    ctx->pc = 0x3E6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F00u;
    // 0x3e6f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6F00u, 0x3E6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6F08u;
label_3e6f08:
    // 0x3e6f08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f0c:
    // 0x3e6f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e6f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f10:
    // 0x3e6f10: 0xc0ea12a  jal         func_3A84A8
label_3e6f14:
    if (ctx->pc == 0x3E6F14u) {
        ctx->pc = 0x3E6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F10u;
        // 0x3e6f14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6F18u;
        goto label_3e6f18;
    }
    ctx->pc = 0x3E6F10u;
    SET_GPR_U32(ctx, 31, 0x3E6F18u);
    ctx->pc = 0x3E6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F10u;
    // 0x3e6f14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E6F10u, 0x3E6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6F18u;
label_3e6f18:
    // 0x3e6f18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3e6f1c:
    // 0x3e6f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f20:
    // 0x3e6f20: 0x34420304  ori         $v0, $v0, 0x304
    ctx->pc = 0x3e6f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)772);
label_3e6f24:
    // 0x3e6f24: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e6f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e6f28:
    // 0x3e6f28: 0xc0e858c  jal         func_3A1630
label_3e6f2c:
    if (ctx->pc == 0x3E6F2Cu) {
        ctx->pc = 0x3E6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F28u;
        // 0x3e6f2c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6F30u;
        goto label_3e6f30;
    }
    ctx->pc = 0x3E6F28u;
    SET_GPR_U32(ctx, 31, 0x3E6F30u);
    ctx->pc = 0x3E6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F28u;
    // 0x3e6f2c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6F28u, 0x3E6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6F30u;
label_3e6f30:
    // 0x3e6f30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e6f34:
    // 0x3e6f34: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3e6f38:
    // 0x3e6f38: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e6f3c:
    // 0x3e6f3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e6f40:
    // 0x3e6f40: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3e6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3e6f44:
    // 0x3e6f44: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_3e6f48:
    if (ctx->pc == 0x3E6F48u) {
        ctx->pc = 0x3E6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F44u;
        // 0x3e6f48: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6F4Cu;
        goto label_3e6f4c;
    }
    ctx->pc = 0x3E6F44u;
    {
        const bool branch_taken_0x3e6f44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F44u;
        // 0x3e6f48: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f44) {
            ctx->pc = 0x3E6F54u;
            goto label_3e6f54;
        }
    }
    ctx->pc = 0x3E6F4Cu;
label_3e6f4c:
    // 0x3e6f4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e6f50:
    if (ctx->pc == 0x3E6F50u) {
        ctx->pc = 0x3E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F4Cu;
        // 0x3e6f50: 0x3c040003  lui         $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6F54u;
        goto label_3e6f54;
    }
    ctx->pc = 0x3E6F4Cu;
    {
        const bool branch_taken_0x3e6f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F4Cu;
        // 0x3e6f50: 0x3c040003  lui         $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f4c) {
            ctx->pc = 0x3E6F5Cu;
            goto label_3e6f5c;
        }
    }
    ctx->pc = 0x3E6F54u;
label_3e6f54:
    // 0x3e6f54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e6f58:
    // 0x3e6f58: 0x2622024  and         $a0, $s3, $v0
    ctx->pc = 0x3e6f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3e6f5c:
    // 0x3e6f5c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e6f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6f60:
    // 0x3e6f60: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x3e6f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_3e6f64:
    // 0x3e6f64: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3e6f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e6f68:
    // 0x3e6f68: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3e6f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3e6f6c:
    // 0x3e6f6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e6f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e6f70:
    // 0x3e6f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e6f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e6f74:
    // 0x3e6f74: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e6f74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e6f78:
    // 0x3e6f78: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e6f7c:
    // 0x3e6f7c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3e6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3e6f80:
    // 0x3e6f80: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3e6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3e6f84:
    // 0x3e6f84: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x3e6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
label_3e6f88:
    // 0x3e6f88: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x3e6f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_3e6f8c:
    // 0x3e6f8c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3e6f90:
    // 0x3e6f90: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3e6f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3e6f94:
    // 0x3e6f94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e6f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e6f98:
    // 0x3e6f98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e6f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e6f9c:
    // 0x3e6f9c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e6f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6fa0:
    // 0x3e6fa0: 0xc0cd508  jal         func_335420
label_3e6fa4:
    if (ctx->pc == 0x3E6FA4u) {
        ctx->pc = 0x3E6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FA0u;
        // 0x3e6fa4: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6FA8u;
        goto label_3e6fa8;
    }
    ctx->pc = 0x3E6FA0u;
    SET_GPR_U32(ctx, 31, 0x3E6FA8u);
    ctx->pc = 0x3E6FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FA0u;
    // 0x3e6fa4: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3E6FA0u, 0x3E6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FA8u;
label_3e6fa8:
    // 0x3e6fa8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3e6fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3e6fac:
    // 0x3e6fac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e6facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e6fb0:
    // 0x3e6fb0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e6fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e6fb4:
    // 0x3e6fb4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e6fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e6fb8:
    // 0x3e6fb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e6fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6fbc:
    // 0x3e6fbc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3e6fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e6fc0:
    // 0x3e6fc0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3e6fc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6fc4:
    // 0x3e6fc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6fc8:
    // 0x3e6fc8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3e6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e6fcc:
    // 0x3e6fcc: 0x3e00008  jr          $ra
label_3e6fd0:
    if (ctx->pc == 0x3E6FD0u) {
        ctx->pc = 0x3E6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FCCu;
        // 0x3e6fd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6FD4u;
        goto label_3e6fd4;
    }
    ctx->pc = 0x3E6FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FCCu;
        // 0x3e6fd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6FD4u;
label_3e6fd4:
    // 0x3e6fd4: 0x0  nop
    ctx->pc = 0x3e6fd4u;
    // NOP
    ctx->pc = 0x3e6fd8u;
}
