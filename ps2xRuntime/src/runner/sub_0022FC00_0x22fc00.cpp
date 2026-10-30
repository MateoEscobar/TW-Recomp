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

// Function: sub_0022FC00
// Address: 0x22fc00 - 0x22fce8
void sub_0022FC00_0x22fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FC00_0x22fc00");
#endif

    switch (ctx->pc) {
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fcd0u: goto label_22fcd0;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcd8u: goto label_22fcd8;
        case 0x22fcdcu: goto label_22fcdc;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fce4u: goto label_22fce4;
        default: break;
    }

    ctx->pc = 0x22fc00u;

label_22fc00:
    // 0x22fc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22fc04:
    // 0x22fc04: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_22fc08:
    // 0x22fc08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22fc0c:
    // 0x22fc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22fc10:
    // 0x22fc10: 0xc089988  jal         func_226620
label_22fc14:
    if (ctx->pc == 0x22FC14u) {
        ctx->pc = 0x22FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC10u;
        // 0x22fc14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC18u;
        goto label_22fc18;
    }
    ctx->pc = 0x22FC10u;
    SET_GPR_U32(ctx, 31, 0x22FC18u);
    ctx->pc = 0x22FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC10u;
    // 0x22fc14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22FC10u, 0x22FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC18u;
label_22fc18:
    // 0x22fc18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fc1c:
    // 0x22fc1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22fc20:
    // 0x22fc20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22fc24:
    // 0x22fc24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22fc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22fc28:
    // 0x22fc28: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22fc2c:
    // 0x22fc2c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22fc30:
    // 0x22fc30: 0x60f809  jalr        $v1
label_22fc34:
    if (ctx->pc == 0x22FC34u) {
        ctx->pc = 0x22FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC30u;
        // 0x22fc34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC38u;
        goto label_22fc38;
    }
    ctx->pc = 0x22FC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22FC38u);
        ctx->pc = 0x22FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC30u;
        // 0x22fc34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC30u, 0x22FC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FC38u;
label_22fc38:
    // 0x22fc38: 0xc095018  jal         func_254060
label_22fc3c:
    if (ctx->pc == 0x22FC3Cu) {
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC40u;
        goto label_22fc40;
    }
    ctx->pc = 0x22FC38u;
    SET_GPR_U32(ctx, 31, 0x22FC40u);
    ctx->pc = 0x22FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC38u;
    // 0x22fc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22FC38u, 0x22FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_22fc44:
    // 0x22fc44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22fc48:
    if (ctx->pc == 0x22FC48u) {
        ctx->pc = 0x22FC4Cu;
        goto label_22fc4c;
    }
    ctx->pc = 0x22FC44u;
    {
        const bool branch_taken_0x22fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc44) {
            ctx->pc = 0x22FC60u;
            goto label_22fc60;
        }
    }
    ctx->pc = 0x22FC4Cu;
label_22fc4c:
    // 0x22fc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fc50:
    // 0x22fc50: 0xc094fde  jal         func_253F78
label_22fc54:
    if (ctx->pc == 0x22FC54u) {
        ctx->pc = 0x22FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC50u;
        // 0x22fc54: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC58u;
        goto label_22fc58;
    }
    ctx->pc = 0x22FC50u;
    SET_GPR_U32(ctx, 31, 0x22FC58u);
    ctx->pc = 0x22FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC50u;
    // 0x22fc54: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22FC50u, 0x22FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC58u;
label_22fc58:
    // 0x22fc58: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fc5c:
    if (ctx->pc == 0x22FC5Cu) {
        ctx->pc = 0x22FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC58u;
        // 0x22fc5c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC60u;
        goto label_22fc60;
    }
    ctx->pc = 0x22FC58u;
    {
        const bool branch_taken_0x22fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC58u;
        // 0x22fc5c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc58) {
            ctx->pc = 0x22FC6Cu;
            goto label_22fc6c;
        }
    }
    ctx->pc = 0x22FC60u;
label_22fc60:
    // 0x22fc60: 0xc094fca  jal         func_253F28
label_22fc64:
    if (ctx->pc == 0x22FC64u) {
        ctx->pc = 0x22FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC60u;
        // 0x22fc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC68u;
        goto label_22fc68;
    }
    ctx->pc = 0x22FC60u;
    SET_GPR_U32(ctx, 31, 0x22FC68u);
    ctx->pc = 0x22FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC60u;
    // 0x22fc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22FC60u, 0x22FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC68u;
label_22fc68:
    // 0x22fc68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fc6c:
    // 0x22fc6c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22fc70:
    // 0x22fc70: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22fc74:
    // 0x22fc74: 0x40f809  jalr        $v0
label_22fc78:
    if (ctx->pc == 0x22FC78u) {
        ctx->pc = 0x22FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC74u;
        // 0x22fc78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC7Cu;
        goto label_22fc7c;
    }
    ctx->pc = 0x22FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FC7Cu);
        ctx->pc = 0x22FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC74u;
        // 0x22fc78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC74u, 0x22FC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FC7Cu;
label_22fc7c:
    // 0x22fc7c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_22fc80:
    if (ctx->pc == 0x22FC80u) {
        ctx->pc = 0x22FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC7Cu;
        // 0x22fc80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC84u;
        goto label_22fc84;
    }
    ctx->pc = 0x22FC7Cu;
    {
        const bool branch_taken_0x22fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc7c) {
            ctx->pc = 0x22FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC7Cu;
            // 0x22fc80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FCDCu;
            goto label_22fcdc;
        }
    }
    ctx->pc = 0x22FC84u;
label_22fc84:
    // 0x22fc84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22fc88:
    // 0x22fc88: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22fc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22fc8c:
    // 0x22fc8c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22fc90:
    // 0x22fc90: 0x40f809  jalr        $v0
label_22fc94:
    if (ctx->pc == 0x22FC94u) {
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC98u;
        goto label_22fc98;
    }
    ctx->pc = 0x22FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FC98u);
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC90u, 0x22FC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FC98u;
label_22fc98:
    // 0x22fc98: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x22fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_22fc9c:
    // 0x22fc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fca0:
    // 0x22fca0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22fca4:
    // 0x22fca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22fca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fca8:
    // 0x22fca8: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x22fca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_22fcac:
    // 0x22fcac: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x22fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_22fcb0:
    // 0x22fcb0: 0x60f809  jalr        $v1
label_22fcb4:
    if (ctx->pc == 0x22FCB4u) {
        ctx->pc = 0x22FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCB0u;
        // 0x22fcb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCB8u;
        goto label_22fcb8;
    }
    ctx->pc = 0x22FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22FCB8u);
        ctx->pc = 0x22FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCB0u;
        // 0x22fcb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCB0u, 0x22FCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FCB8u;
label_22fcb8:
    // 0x22fcb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22fcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fcbc:
    // 0x22fcbc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_22fcc0:
    if (ctx->pc == 0x22FCC0u) {
        ctx->pc = 0x22FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCBCu;
        // 0x22fcc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCC4u;
        goto label_22fcc4;
    }
    ctx->pc = 0x22FCBCu;
    {
        const bool branch_taken_0x22fcbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCBCu;
        // 0x22fcc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcbc) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22FCC4u;
label_22fcc4:
    // 0x22fcc4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_22fcc8:
    // 0x22fcc8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x22fcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_22fccc:
    // 0x22fccc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_22fcd0:
    // 0x22fcd0: 0x60f809  jalr        $v1
label_22fcd4:
    if (ctx->pc == 0x22FCD4u) {
        ctx->pc = 0x22FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCD0u;
        // 0x22fcd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCD8u;
        goto label_22fcd8;
    }
    ctx->pc = 0x22FCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22FCD8u);
        ctx->pc = 0x22FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCD0u;
        // 0x22fcd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCD0u, 0x22FCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FCD8u;
label_22fcd8:
    // 0x22fcd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22fcdc:
    // 0x22fcdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fce0:
    // 0x22fce0: 0x3e00008  jr          $ra
label_22fce4:
    if (ctx->pc == 0x22FCE4u) {
        ctx->pc = 0x22FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCE0u;
        // 0x22fce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCE8u;
        goto label_fallthrough_0x22fce0;
    }
    ctx->pc = 0x22FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCE0u;
        // 0x22fce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22fce0:
    ctx->pc = 0x22FCE8u;
}
