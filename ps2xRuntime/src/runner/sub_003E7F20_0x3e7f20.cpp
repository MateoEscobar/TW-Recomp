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

// Function: sub_003E7F20
// Address: 0x3e7f20 - 0x3e7ff8
void sub_003E7F20_0x3e7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7F20_0x3e7f20");
#endif

    switch (ctx->pc) {
        case 0x3e7f20u: goto label_3e7f20;
        case 0x3e7f24u: goto label_3e7f24;
        case 0x3e7f28u: goto label_3e7f28;
        case 0x3e7f2cu: goto label_3e7f2c;
        case 0x3e7f30u: goto label_3e7f30;
        case 0x3e7f34u: goto label_3e7f34;
        case 0x3e7f38u: goto label_3e7f38;
        case 0x3e7f3cu: goto label_3e7f3c;
        case 0x3e7f40u: goto label_3e7f40;
        case 0x3e7f44u: goto label_3e7f44;
        case 0x3e7f48u: goto label_3e7f48;
        case 0x3e7f4cu: goto label_3e7f4c;
        case 0x3e7f50u: goto label_3e7f50;
        case 0x3e7f54u: goto label_3e7f54;
        case 0x3e7f58u: goto label_3e7f58;
        case 0x3e7f5cu: goto label_3e7f5c;
        case 0x3e7f60u: goto label_3e7f60;
        case 0x3e7f64u: goto label_3e7f64;
        case 0x3e7f68u: goto label_3e7f68;
        case 0x3e7f6cu: goto label_3e7f6c;
        case 0x3e7f70u: goto label_3e7f70;
        case 0x3e7f74u: goto label_3e7f74;
        case 0x3e7f78u: goto label_3e7f78;
        case 0x3e7f7cu: goto label_3e7f7c;
        case 0x3e7f80u: goto label_3e7f80;
        case 0x3e7f84u: goto label_3e7f84;
        case 0x3e7f88u: goto label_3e7f88;
        case 0x3e7f8cu: goto label_3e7f8c;
        case 0x3e7f90u: goto label_3e7f90;
        case 0x3e7f94u: goto label_3e7f94;
        case 0x3e7f98u: goto label_3e7f98;
        case 0x3e7f9cu: goto label_3e7f9c;
        case 0x3e7fa0u: goto label_3e7fa0;
        case 0x3e7fa4u: goto label_3e7fa4;
        case 0x3e7fa8u: goto label_3e7fa8;
        case 0x3e7facu: goto label_3e7fac;
        case 0x3e7fb0u: goto label_3e7fb0;
        case 0x3e7fb4u: goto label_3e7fb4;
        case 0x3e7fb8u: goto label_3e7fb8;
        case 0x3e7fbcu: goto label_3e7fbc;
        case 0x3e7fc0u: goto label_3e7fc0;
        case 0x3e7fc4u: goto label_3e7fc4;
        case 0x3e7fc8u: goto label_3e7fc8;
        case 0x3e7fccu: goto label_3e7fcc;
        case 0x3e7fd0u: goto label_3e7fd0;
        case 0x3e7fd4u: goto label_3e7fd4;
        case 0x3e7fd8u: goto label_3e7fd8;
        case 0x3e7fdcu: goto label_3e7fdc;
        case 0x3e7fe0u: goto label_3e7fe0;
        case 0x3e7fe4u: goto label_3e7fe4;
        case 0x3e7fe8u: goto label_3e7fe8;
        case 0x3e7fecu: goto label_3e7fec;
        case 0x3e7ff0u: goto label_3e7ff0;
        case 0x3e7ff4u: goto label_3e7ff4;
        default: break;
    }

    ctx->pc = 0x3e7f20u;

label_3e7f20:
    // 0x3e7f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e7f24:
    // 0x3e7f24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e7f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e7f28:
    // 0x3e7f28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e7f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e7f2c:
    // 0x3e7f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f30:
    // 0x3e7f30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e7f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e7f34:
    // 0x3e7f34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e7f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f38:
    // 0x3e7f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e7f3c:
    // 0x3e7f3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e7f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f40:
    // 0x3e7f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e7f44:
    // 0x3e7f44: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e7f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e7f48:
    // 0x3e7f48: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e7f4c:
    // 0x3e7f4c: 0x40f809  jalr        $v0
label_3e7f50:
    if (ctx->pc == 0x3E7F50u) {
        ctx->pc = 0x3E7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F4Cu;
        // 0x3e7f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F54u;
        goto label_3e7f54;
    }
    ctx->pc = 0x3E7F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7F54u);
        ctx->pc = 0x3E7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F4Cu;
        // 0x3e7f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F4Cu, 0x3E7F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7F54u;
label_3e7f54:
    // 0x3e7f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e7f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f58:
    // 0x3e7f58: 0x2e420033  sltiu       $v0, $s2, 0x33
    ctx->pc = 0x3e7f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_3e7f5c:
    // 0x3e7f5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_3e7f60:
    if (ctx->pc == 0x3E7F60u) {
        ctx->pc = 0x3E7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F5Cu;
        // 0x3e7f60: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F64u;
        goto label_3e7f64;
    }
    ctx->pc = 0x3E7F5Cu;
    {
        const bool branch_taken_0x3e7f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F5Cu;
        // 0x3e7f60: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f5c) {
            ctx->pc = 0x3E8004u;
            return;
        }
    }
    ctx->pc = 0x3E7F64u;
label_3e7f64:
    // 0x3e7f64: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3e7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3e7f68:
    // 0x3e7f68: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x3e7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
label_3e7f6c:
    // 0x3e7f6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e7f70:
    // 0x3e7f70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e7f74:
    // 0x3e7f74: 0x800008  jr          $a0
label_3e7f78:
    if (ctx->pc == 0x3E7F78u) {
        ctx->pc = 0x3E7F7Cu;
        goto label_3e7f7c;
    }
    ctx->pc = 0x3E7F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E7F7Cu: goto label_3e7f7c;
            case 0x3E7F98u: goto label_3e7f98;
            case 0x3E7FACu: goto label_3e7fac;
            case 0x3E7FC0u: goto label_3e7fc0;
            case 0x3E7FD4u: goto label_3e7fd4;
            case 0x3E7FE8u: goto label_3e7fe8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E7F7Cu;
label_3e7f7c:
    // 0x3e7f7c: 0xc0ea146  jal         func_3A8518
label_3e7f80:
    if (ctx->pc == 0x3E7F80u) {
        ctx->pc = 0x3E7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F7Cu;
        // 0x3e7f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F84u;
        goto label_3e7f84;
    }
    ctx->pc = 0x3E7F7Cu;
    SET_GPR_U32(ctx, 31, 0x3E7F84u);
    ctx->pc = 0x3E7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F7Cu;
    // 0x3e7f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E7F7Cu, 0x3E7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F84u;
label_3e7f84:
    // 0x3e7f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f88:
    // 0x3e7f88: 0xc0e85fa  jal         func_3A17E8
label_3e7f8c:
    if (ctx->pc == 0x3E7F8Cu) {
        ctx->pc = 0x3E7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F88u;
        // 0x3e7f8c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F90u;
        goto label_3e7f90;
    }
    ctx->pc = 0x3E7F88u;
    SET_GPR_U32(ctx, 31, 0x3E7F90u);
    ctx->pc = 0x3E7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F88u;
    // 0x3e7f8c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3E7F88u, 0x3E7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F90u;
label_3e7f90:
    // 0x3e7f90: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3e7f94:
    if (ctx->pc == 0x3E7F94u) {
        ctx->pc = 0x3E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F90u;
        // 0x3e7f94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F98u;
        goto label_3e7f98;
    }
    ctx->pc = 0x3E7F90u;
    {
        const bool branch_taken_0x3e7f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F90u;
        // 0x3e7f94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f90) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
    ctx->pc = 0x3E7F98u;
label_3e7f98:
    // 0x3e7f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7f9c:
    // 0x3e7f9c: 0xc0f9d74  jal         func_3E75D0
label_3e7fa0:
    if (ctx->pc == 0x3E7FA0u) {
        ctx->pc = 0x3E7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F9Cu;
        // 0x3e7fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FA4u;
        goto label_3e7fa4;
    }
    ctx->pc = 0x3E7F9Cu;
    SET_GPR_U32(ctx, 31, 0x3E7FA4u);
    ctx->pc = 0x3E7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F9Cu;
    // 0x3e7fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E75D0u, 0x3E7F9Cu, 0x3E7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7FA4u;
label_3e7fa4:
    // 0x3e7fa4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3e7fa8:
    if (ctx->pc == 0x3E7FA8u) {
        ctx->pc = 0x3E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FA4u;
        // 0x3e7fa8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FACu;
        goto label_3e7fac;
    }
    ctx->pc = 0x3E7FA4u;
    {
        const bool branch_taken_0x3e7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FA4u;
        // 0x3e7fa8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fa4) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
    ctx->pc = 0x3E7FACu;
label_3e7fac:
    // 0x3e7fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7fb0:
    // 0x3e7fb0: 0xc0f9daa  jal         func_3E76A8
label_3e7fb4:
    if (ctx->pc == 0x3E7FB4u) {
        ctx->pc = 0x3E7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FB0u;
        // 0x3e7fb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FB8u;
        goto label_3e7fb8;
    }
    ctx->pc = 0x3E7FB0u;
    SET_GPR_U32(ctx, 31, 0x3E7FB8u);
    ctx->pc = 0x3E7FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7FB0u;
    // 0x3e7fb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E76A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E76A8u, 0x3E7FB0u, 0x3E7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7FB8u;
label_3e7fb8:
    // 0x3e7fb8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e7fbc:
    if (ctx->pc == 0x3E7FBCu) {
        ctx->pc = 0x3E7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FB8u;
        // 0x3e7fbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FC0u;
        goto label_3e7fc0;
    }
    ctx->pc = 0x3E7FB8u;
    {
        const bool branch_taken_0x3e7fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FB8u;
        // 0x3e7fbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fb8) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
    ctx->pc = 0x3E7FC0u;
label_3e7fc0:
    // 0x3e7fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7fc4:
    // 0x3e7fc4: 0xc0f9df0  jal         func_3E77C0
label_3e7fc8:
    if (ctx->pc == 0x3E7FC8u) {
        ctx->pc = 0x3E7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FC4u;
        // 0x3e7fc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FCCu;
        goto label_3e7fcc;
    }
    ctx->pc = 0x3E7FC4u;
    SET_GPR_U32(ctx, 31, 0x3E7FCCu);
    ctx->pc = 0x3E7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7FC4u;
    // 0x3e7fc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E77C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E77C0u, 0x3E7FC4u, 0x3E7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7FCCu;
label_3e7fcc:
    // 0x3e7fcc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e7fd0:
    if (ctx->pc == 0x3E7FD0u) {
        ctx->pc = 0x3E7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FCCu;
        // 0x3e7fd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FD4u;
        goto label_3e7fd4;
    }
    ctx->pc = 0x3E7FCCu;
    {
        const bool branch_taken_0x3e7fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FCCu;
        // 0x3e7fd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fcc) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
    ctx->pc = 0x3E7FD4u;
label_3e7fd4:
    // 0x3e7fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7fd8:
    // 0x3e7fd8: 0xc0f9e56  jal         func_3E7958
label_3e7fdc:
    if (ctx->pc == 0x3E7FDCu) {
        ctx->pc = 0x3E7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FD8u;
        // 0x3e7fdc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FE0u;
        goto label_3e7fe0;
    }
    ctx->pc = 0x3E7FD8u;
    SET_GPR_U32(ctx, 31, 0x3E7FE0u);
    ctx->pc = 0x3E7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7FD8u;
    // 0x3e7fdc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7958u, 0x3E7FD8u, 0x3E7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7FE0u;
label_3e7fe0:
    // 0x3e7fe0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e7fe4:
    if (ctx->pc == 0x3E7FE4u) {
        ctx->pc = 0x3E7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FE0u;
        // 0x3e7fe4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FE8u;
        goto label_3e7fe8;
    }
    ctx->pc = 0x3E7FE0u;
    {
        const bool branch_taken_0x3e7fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FE0u;
        // 0x3e7fe4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fe0) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
    ctx->pc = 0x3E7FE8u;
label_3e7fe8:
    // 0x3e7fe8: 0xc0e8616  jal         func_3A1858
label_3e7fec:
    if (ctx->pc == 0x3E7FECu) {
        ctx->pc = 0x3E7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FE8u;
        // 0x3e7fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FF0u;
        goto label_3e7ff0;
    }
    ctx->pc = 0x3E7FE8u;
    SET_GPR_U32(ctx, 31, 0x3E7FF0u);
    ctx->pc = 0x3E7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7FE8u;
    // 0x3e7fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E7FE8u, 0x3E7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7FF0u;
label_3e7ff0:
    // 0x3e7ff0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e7ff4:
    if (ctx->pc == 0x3E7FF4u) {
        ctx->pc = 0x3E7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FF0u;
        // 0x3e7ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7FF8u;
        goto label_fallthrough_0x3e7ff0;
    }
    ctx->pc = 0x3E7FF0u;
    {
        const bool branch_taken_0x3e7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FF0u;
        // 0x3e7ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ff0) {
            ctx->pc = 0x3E8008u;
            return;
        }
    }
label_fallthrough_0x3e7ff0:
    ctx->pc = 0x3E7FF8u;
}
