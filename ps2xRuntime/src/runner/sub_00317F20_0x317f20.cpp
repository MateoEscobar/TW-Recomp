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

// Function: sub_00317F20
// Address: 0x317f20 - 0x317ff8
void sub_00317F20_0x317f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317F20_0x317f20");
#endif

    switch (ctx->pc) {
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        default: break;
    }

    ctx->pc = 0x317f20u;

label_317f20:
    // 0x317f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x317f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_317f24:
    // 0x317f24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x317f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_317f28:
    // 0x317f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_317f2c:
    // 0x317f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317f30:
    // 0x317f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_317f34:
    // 0x317f34: 0xc05959e  jal         func_165678
label_317f38:
    if (ctx->pc == 0x317F38u) {
        ctx->pc = 0x317F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F34u;
        // 0x317f38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F3Cu;
        goto label_317f3c;
    }
    ctx->pc = 0x317F34u;
    SET_GPR_U32(ctx, 31, 0x317F3Cu);
    ctx->pc = 0x317F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F34u;
    // 0x317f38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x317F34u, 0x317F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F3Cu;
label_317f3c:
    // 0x317f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f40:
    // 0x317f40: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_317f44:
    if (ctx->pc == 0x317F44u) {
        ctx->pc = 0x317F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F40u;
        // 0x317f44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F48u;
        goto label_317f48;
    }
    ctx->pc = 0x317F40u;
    {
        const bool branch_taken_0x317f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F40u;
        // 0x317f44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f40) {
            ctx->pc = 0x317FE4u;
            goto label_317fe4;
        }
    }
    ctx->pc = 0x317F48u;
label_317f48:
    // 0x317f48: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x317f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_317f4c:
    // 0x317f4c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_317f50:
    if (ctx->pc == 0x317F50u) {
        ctx->pc = 0x317F54u;
        goto label_317f54;
    }
    ctx->pc = 0x317F4Cu;
    {
        const bool branch_taken_0x317f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x317f4c) {
            ctx->pc = 0x317F64u;
            goto label_317f64;
        }
    }
    ctx->pc = 0x317F54u;
label_317f54:
    // 0x317f54: 0xc0c5fa4  jal         func_317E90
label_317f58:
    if (ctx->pc == 0x317F58u) {
        ctx->pc = 0x317F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F54u;
        // 0x317f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F5Cu;
        goto label_317f5c;
    }
    ctx->pc = 0x317F54u;
    SET_GPR_U32(ctx, 31, 0x317F5Cu);
    ctx->pc = 0x317F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F54u;
    // 0x317f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317E90u, 0x317F54u, 0x317F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F5Cu;
label_317f5c:
    // 0x317f5c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_317f60:
    if (ctx->pc == 0x317F60u) {
        ctx->pc = 0x317F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F5Cu;
        // 0x317f60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F64u;
        goto label_317f64;
    }
    ctx->pc = 0x317F5Cu;
    {
        const bool branch_taken_0x317f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f5c) {
            ctx->pc = 0x317F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317F5Cu;
            // 0x317f60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FE8u;
            goto label_317fe8;
        }
    }
    ctx->pc = 0x317F64u;
label_317f64:
    // 0x317f64: 0xc0c5f4e  jal         func_317D38
label_317f68:
    if (ctx->pc == 0x317F68u) {
        ctx->pc = 0x317F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F64u;
        // 0x317f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F6Cu;
        goto label_317f6c;
    }
    ctx->pc = 0x317F64u;
    SET_GPR_U32(ctx, 31, 0x317F6Cu);
    ctx->pc = 0x317F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F64u;
    // 0x317f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317D38u, 0x317F64u, 0x317F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F6Cu;
label_317f6c:
    // 0x317f6c: 0xc087502  jal         func_21D408
label_317f70:
    if (ctx->pc == 0x317F70u) {
        ctx->pc = 0x317F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F6Cu;
        // 0x317f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F74u;
        goto label_317f74;
    }
    ctx->pc = 0x317F6Cu;
    SET_GPR_U32(ctx, 31, 0x317F74u);
    ctx->pc = 0x317F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F6Cu;
    // 0x317f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317F6Cu, 0x317F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F74u;
label_317f74:
    // 0x317f74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x317f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f78:
    // 0x317f78: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x317f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_317f7c:
    // 0x317f7c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_317f80:
    if (ctx->pc == 0x317F80u) {
        ctx->pc = 0x317F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F7Cu;
        // 0x317f80: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F84u;
        goto label_317f84;
    }
    ctx->pc = 0x317F7Cu;
    {
        const bool branch_taken_0x317f7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x317F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F7Cu;
        // 0x317f80: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f7c) {
            ctx->pc = 0x317F90u;
            goto label_317f90;
        }
    }
    ctx->pc = 0x317F84u;
label_317f84:
    // 0x317f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317f88:
    // 0x317f88: 0x10000002  b           . + 4 + (0x2 << 2)
label_317f8c:
    if (ctx->pc == 0x317F8Cu) {
        ctx->pc = 0x317F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F88u;
        // 0x317f8c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F90u;
        goto label_317f90;
    }
    ctx->pc = 0x317F88u;
    {
        const bool branch_taken_0x317f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F88u;
        // 0x317f8c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f88) {
            ctx->pc = 0x317F94u;
            goto label_317f94;
        }
    }
    ctx->pc = 0x317F90u;
label_317f90:
    // 0x317f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f94:
    // 0x317f94: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
label_317f98:
    if (ctx->pc == 0x317F98u) {
        ctx->pc = 0x317F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F94u;
        // 0x317f98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F9Cu;
        goto label_317f9c;
    }
    ctx->pc = 0x317F94u;
    {
        const bool branch_taken_0x317f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f94) {
            ctx->pc = 0x317F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317F94u;
            // 0x317f98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FE8u;
            goto label_317fe8;
        }
    }
    ctx->pc = 0x317F9Cu;
label_317f9c:
    // 0x317f9c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x317f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_317fa0:
    // 0x317fa0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_317fa4:
    // 0x317fa4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_317fa8:
    // 0x317fa8: 0x40f809  jalr        $v0
label_317fac:
    if (ctx->pc == 0x317FACu) {
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FB0u;
        goto label_317fb0;
    }
    ctx->pc = 0x317FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317FB0u);
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317FA8u, 0x317FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317FB0u;
label_317fb0:
    // 0x317fb0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_317fb4:
    // 0x317fb4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_317fb8:
    if (ctx->pc == 0x317FB8u) {
        ctx->pc = 0x317FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FB4u;
        // 0x317fb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FBCu;
        goto label_317fbc;
    }
    ctx->pc = 0x317FB4u;
    {
        const bool branch_taken_0x317fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x317fb4) {
            ctx->pc = 0x317FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317FB4u;
            // 0x317fb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FE8u;
            goto label_317fe8;
        }
    }
    ctx->pc = 0x317FBCu;
label_317fbc:
    // 0x317fbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_317fc0:
    // 0x317fc0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x317fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_317fc4:
    // 0x317fc4: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_317fc8:
    // 0x317fc8: 0x24c61520  addiu       $a2, $a2, 0x1520
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5408));
label_317fcc:
    // 0x317fcc: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_317fd0:
    // 0x317fd0: 0xc05905e  jal         func_164178
label_317fd4:
    if (ctx->pc == 0x317FD4u) {
        ctx->pc = 0x317FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FD0u;
        // 0x317fd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FD8u;
        goto label_317fd8;
    }
    ctx->pc = 0x317FD0u;
    SET_GPR_U32(ctx, 31, 0x317FD8u);
    ctx->pc = 0x317FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317FD0u;
    // 0x317fd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x317FD0u, 0x317FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FD8u;
label_317fd8:
    // 0x317fd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_317fdc:
    // 0x317fdc: 0xc059750  jal         func_165D40
label_317fe0:
    if (ctx->pc == 0x317FE0u) {
        ctx->pc = 0x317FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FDCu;
        // 0x317fe0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FE4u;
        goto label_317fe4;
    }
    ctx->pc = 0x317FDCu;
    SET_GPR_U32(ctx, 31, 0x317FE4u);
    ctx->pc = 0x317FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317FDCu;
    // 0x317fe0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x317FDCu, 0x317FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FE4u;
label_317fe4:
    // 0x317fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x317fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_317fe8:
    // 0x317fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x317fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317fec:
    // 0x317fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317ff0:
    // 0x317ff0: 0x3e00008  jr          $ra
label_317ff4:
    if (ctx->pc == 0x317FF4u) {
        ctx->pc = 0x317FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FF0u;
        // 0x317ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FF8u;
        goto label_fallthrough_0x317ff0;
    }
    ctx->pc = 0x317FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FF0u;
        // 0x317ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x317ff0:
    ctx->pc = 0x317FF8u;
}
