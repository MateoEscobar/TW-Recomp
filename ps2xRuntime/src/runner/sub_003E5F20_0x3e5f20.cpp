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

// Function: sub_003E5F20
// Address: 0x3e5f20 - 0x3e5fe0
void sub_003E5F20_0x3e5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5F20_0x3e5f20");
#endif

    switch (ctx->pc) {
        case 0x3e5f20u: goto label_3e5f20;
        case 0x3e5f24u: goto label_3e5f24;
        case 0x3e5f28u: goto label_3e5f28;
        case 0x3e5f2cu: goto label_3e5f2c;
        case 0x3e5f30u: goto label_3e5f30;
        case 0x3e5f34u: goto label_3e5f34;
        case 0x3e5f38u: goto label_3e5f38;
        case 0x3e5f3cu: goto label_3e5f3c;
        case 0x3e5f40u: goto label_3e5f40;
        case 0x3e5f44u: goto label_3e5f44;
        case 0x3e5f48u: goto label_3e5f48;
        case 0x3e5f4cu: goto label_3e5f4c;
        case 0x3e5f50u: goto label_3e5f50;
        case 0x3e5f54u: goto label_3e5f54;
        case 0x3e5f58u: goto label_3e5f58;
        case 0x3e5f5cu: goto label_3e5f5c;
        case 0x3e5f60u: goto label_3e5f60;
        case 0x3e5f64u: goto label_3e5f64;
        case 0x3e5f68u: goto label_3e5f68;
        case 0x3e5f6cu: goto label_3e5f6c;
        case 0x3e5f70u: goto label_3e5f70;
        case 0x3e5f74u: goto label_3e5f74;
        case 0x3e5f78u: goto label_3e5f78;
        case 0x3e5f7cu: goto label_3e5f7c;
        case 0x3e5f80u: goto label_3e5f80;
        case 0x3e5f84u: goto label_3e5f84;
        case 0x3e5f88u: goto label_3e5f88;
        case 0x3e5f8cu: goto label_3e5f8c;
        case 0x3e5f90u: goto label_3e5f90;
        case 0x3e5f94u: goto label_3e5f94;
        case 0x3e5f98u: goto label_3e5f98;
        case 0x3e5f9cu: goto label_3e5f9c;
        case 0x3e5fa0u: goto label_3e5fa0;
        case 0x3e5fa4u: goto label_3e5fa4;
        case 0x3e5fa8u: goto label_3e5fa8;
        case 0x3e5facu: goto label_3e5fac;
        case 0x3e5fb0u: goto label_3e5fb0;
        case 0x3e5fb4u: goto label_3e5fb4;
        case 0x3e5fb8u: goto label_3e5fb8;
        case 0x3e5fbcu: goto label_3e5fbc;
        case 0x3e5fc0u: goto label_3e5fc0;
        case 0x3e5fc4u: goto label_3e5fc4;
        case 0x3e5fc8u: goto label_3e5fc8;
        case 0x3e5fccu: goto label_3e5fcc;
        case 0x3e5fd0u: goto label_3e5fd0;
        case 0x3e5fd4u: goto label_3e5fd4;
        case 0x3e5fd8u: goto label_3e5fd8;
        case 0x3e5fdcu: goto label_3e5fdc;
        default: break;
    }

    ctx->pc = 0x3e5f20u;

label_3e5f20:
    // 0x3e5f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e5f24:
    // 0x3e5f24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e5f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e5f28:
    // 0x3e5f28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e5f2c:
    // 0x3e5f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e5f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f30:
    // 0x3e5f30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e5f34:
    // 0x3e5f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e5f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f38:
    // 0x3e5f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e5f3c:
    // 0x3e5f3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e5f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f40:
    // 0x3e5f40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e5f44:
    // 0x3e5f44: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e5f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e5f48:
    // 0x3e5f48: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e5f4c:
    // 0x3e5f4c: 0x40f809  jalr        $v0
label_3e5f50:
    if (ctx->pc == 0x3E5F50u) {
        ctx->pc = 0x3E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F4Cu;
        // 0x3e5f50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F54u;
        goto label_3e5f54;
    }
    ctx->pc = 0x3E5F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E5F54u);
        ctx->pc = 0x3E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F4Cu;
        // 0x3e5f50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5F4Cu, 0x3E5F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E5F54u;
label_3e5f54:
    // 0x3e5f54: 0x2603ffef  addiu       $v1, $s0, -0x11
    ctx->pc = 0x3e5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967279));
label_3e5f58:
    // 0x3e5f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e5f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f5c:
    // 0x3e5f5c: 0x2c620024  sltiu       $v0, $v1, 0x24
    ctx->pc = 0x3e5f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_3e5f60:
    // 0x3e5f60: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3e5f64:
    if (ctx->pc == 0x3E5F64u) {
        ctx->pc = 0x3E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F60u;
        // 0x3e5f64: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F68u;
        goto label_3e5f68;
    }
    ctx->pc = 0x3E5F60u;
    {
        const bool branch_taken_0x3e5f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F60u;
        // 0x3e5f64: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f60) {
            ctx->pc = 0x3E5FECu;
            return;
        }
    }
    ctx->pc = 0x3E5F68u;
label_3e5f68:
    // 0x3e5f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e5f6c:
    // 0x3e5f6c: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x3e5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
label_3e5f70:
    // 0x3e5f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5f74:
    // 0x3e5f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5f78:
    // 0x3e5f78: 0x800008  jr          $a0
label_3e5f7c:
    if (ctx->pc == 0x3E5F7Cu) {
        ctx->pc = 0x3E5F80u;
        goto label_3e5f80;
    }
    ctx->pc = 0x3E5F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E5F80u: goto label_3e5f80;
            case 0x3E5F8Cu: goto label_3e5f8c;
            case 0x3E5FA0u: goto label_3e5fa0;
            case 0x3E5FB0u: goto label_3e5fb0;
            case 0x3E5FC4u: goto label_3e5fc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E5F80u;
label_3e5f80:
    // 0x3e5f80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e5f84:
    // 0x3e5f84: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e5f88:
    if (ctx->pc == 0x3E5F88u) {
        ctx->pc = 0x3E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F84u;
        // 0x3e5f88: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F8Cu;
        goto label_3e5f8c;
    }
    ctx->pc = 0x3E5F84u;
    {
        const bool branch_taken_0x3e5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F84u;
        // 0x3e5f88: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f84) {
            ctx->pc = 0x3E5FECu;
            return;
        }
    }
    ctx->pc = 0x3E5F8Cu;
label_3e5f8c:
    // 0x3e5f8c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e5f90:
    // 0x3e5f90: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e5f94:
    // 0x3e5f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e5f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e5f98:
    // 0x3e5f98: 0x10000014  b           . + 4 + (0x14 << 2)
label_3e5f9c:
    if (ctx->pc == 0x3E5F9Cu) {
        ctx->pc = 0x3E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F98u;
        // 0x3e5f9c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FA0u;
        goto label_3e5fa0;
    }
    ctx->pc = 0x3E5F98u;
    {
        const bool branch_taken_0x3e5f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F98u;
        // 0x3e5f9c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f98) {
            ctx->pc = 0x3E5FECu;
            return;
        }
    }
    ctx->pc = 0x3E5FA0u;
label_3e5fa0:
    // 0x3e5fa0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e5fa4:
    // 0x3e5fa4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e5fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e5fa8:
    // 0x3e5fa8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3e5fac:
    if (ctx->pc == 0x3E5FACu) {
        ctx->pc = 0x3E5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FA8u;
        // 0x3e5fac: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FB0u;
        goto label_3e5fb0;
    }
    ctx->pc = 0x3E5FA8u;
    {
        const bool branch_taken_0x3e5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FA8u;
        // 0x3e5fac: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fa8) {
            ctx->pc = 0x3E5FECu;
            return;
        }
    }
    ctx->pc = 0x3E5FB0u;
label_3e5fb0:
    // 0x3e5fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5fb4:
    // 0x3e5fb4: 0xc0f9740  jal         func_3E5D00
label_3e5fb8:
    if (ctx->pc == 0x3E5FB8u) {
        ctx->pc = 0x3E5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FB4u;
        // 0x3e5fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FBCu;
        goto label_3e5fbc;
    }
    ctx->pc = 0x3E5FB4u;
    SET_GPR_U32(ctx, 31, 0x3E5FBCu);
    ctx->pc = 0x3E5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FB4u;
    // 0x3e5fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5D00u, 0x3E5FB4u, 0x3E5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FBCu;
label_3e5fbc:
    // 0x3e5fbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e5fc0:
    if (ctx->pc == 0x3E5FC0u) {
        ctx->pc = 0x3E5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FBCu;
        // 0x3e5fc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FC4u;
        goto label_3e5fc4;
    }
    ctx->pc = 0x3E5FBCu;
    {
        const bool branch_taken_0x3e5fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FBCu;
        // 0x3e5fc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fbc) {
            ctx->pc = 0x3E5FF0u;
            return;
        }
    }
    ctx->pc = 0x3E5FC4u;
label_3e5fc4:
    // 0x3e5fc4: 0xc0ea146  jal         func_3A8518
label_3e5fc8:
    if (ctx->pc == 0x3E5FC8u) {
        ctx->pc = 0x3E5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FC4u;
        // 0x3e5fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FCCu;
        goto label_3e5fcc;
    }
    ctx->pc = 0x3E5FC4u;
    SET_GPR_U32(ctx, 31, 0x3E5FCCu);
    ctx->pc = 0x3E5FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FC4u;
    // 0x3e5fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E5FC4u, 0x3E5FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FCCu;
label_3e5fcc:
    // 0x3e5fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5fd0:
    // 0x3e5fd0: 0xc0e6ec6  jal         func_39BB18
label_3e5fd4:
    if (ctx->pc == 0x3E5FD4u) {
        ctx->pc = 0x3E5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FD0u;
        // 0x3e5fd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FD8u;
        goto label_3e5fd8;
    }
    ctx->pc = 0x3E5FD0u;
    SET_GPR_U32(ctx, 31, 0x3E5FD8u);
    ctx->pc = 0x3E5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FD0u;
    // 0x3e5fd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E5FD0u, 0x3E5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FD8u;
label_3e5fd8:
    // 0x3e5fd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e5fdc:
    if (ctx->pc == 0x3E5FDCu) {
        ctx->pc = 0x3E5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FD8u;
        // 0x3e5fdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FE0u;
        goto label_fallthrough_0x3e5fd8;
    }
    ctx->pc = 0x3E5FD8u;
    {
        const bool branch_taken_0x3e5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FD8u;
        // 0x3e5fdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fd8) {
            ctx->pc = 0x3E5FF0u;
            return;
        }
    }
label_fallthrough_0x3e5fd8:
    ctx->pc = 0x3E5FE0u;
}
