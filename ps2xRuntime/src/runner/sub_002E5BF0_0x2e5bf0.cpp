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

// Function: sub_002E5BF0
// Address: 0x2e5bf0 - 0x2e5d00
void sub_002E5BF0_0x2e5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5BF0_0x2e5bf0");
#endif

    switch (ctx->pc) {
        case 0x2e5bf0u: goto label_2e5bf0;
        case 0x2e5bf4u: goto label_2e5bf4;
        case 0x2e5bf8u: goto label_2e5bf8;
        case 0x2e5bfcu: goto label_2e5bfc;
        case 0x2e5c00u: goto label_2e5c00;
        case 0x2e5c04u: goto label_2e5c04;
        case 0x2e5c08u: goto label_2e5c08;
        case 0x2e5c0cu: goto label_2e5c0c;
        case 0x2e5c10u: goto label_2e5c10;
        case 0x2e5c14u: goto label_2e5c14;
        case 0x2e5c18u: goto label_2e5c18;
        case 0x2e5c1cu: goto label_2e5c1c;
        case 0x2e5c20u: goto label_2e5c20;
        case 0x2e5c24u: goto label_2e5c24;
        case 0x2e5c28u: goto label_2e5c28;
        case 0x2e5c2cu: goto label_2e5c2c;
        case 0x2e5c30u: goto label_2e5c30;
        case 0x2e5c34u: goto label_2e5c34;
        case 0x2e5c38u: goto label_2e5c38;
        case 0x2e5c3cu: goto label_2e5c3c;
        case 0x2e5c40u: goto label_2e5c40;
        case 0x2e5c44u: goto label_2e5c44;
        case 0x2e5c48u: goto label_2e5c48;
        case 0x2e5c4cu: goto label_2e5c4c;
        case 0x2e5c50u: goto label_2e5c50;
        case 0x2e5c54u: goto label_2e5c54;
        case 0x2e5c58u: goto label_2e5c58;
        case 0x2e5c5cu: goto label_2e5c5c;
        case 0x2e5c60u: goto label_2e5c60;
        case 0x2e5c64u: goto label_2e5c64;
        case 0x2e5c68u: goto label_2e5c68;
        case 0x2e5c6cu: goto label_2e5c6c;
        case 0x2e5c70u: goto label_2e5c70;
        case 0x2e5c74u: goto label_2e5c74;
        case 0x2e5c78u: goto label_2e5c78;
        case 0x2e5c7cu: goto label_2e5c7c;
        case 0x2e5c80u: goto label_2e5c80;
        case 0x2e5c84u: goto label_2e5c84;
        case 0x2e5c88u: goto label_2e5c88;
        case 0x2e5c8cu: goto label_2e5c8c;
        case 0x2e5c90u: goto label_2e5c90;
        case 0x2e5c94u: goto label_2e5c94;
        case 0x2e5c98u: goto label_2e5c98;
        case 0x2e5c9cu: goto label_2e5c9c;
        case 0x2e5ca0u: goto label_2e5ca0;
        case 0x2e5ca4u: goto label_2e5ca4;
        case 0x2e5ca8u: goto label_2e5ca8;
        case 0x2e5cacu: goto label_2e5cac;
        case 0x2e5cb0u: goto label_2e5cb0;
        case 0x2e5cb4u: goto label_2e5cb4;
        case 0x2e5cb8u: goto label_2e5cb8;
        case 0x2e5cbcu: goto label_2e5cbc;
        case 0x2e5cc0u: goto label_2e5cc0;
        case 0x2e5cc4u: goto label_2e5cc4;
        case 0x2e5cc8u: goto label_2e5cc8;
        case 0x2e5cccu: goto label_2e5ccc;
        case 0x2e5cd0u: goto label_2e5cd0;
        case 0x2e5cd4u: goto label_2e5cd4;
        case 0x2e5cd8u: goto label_2e5cd8;
        case 0x2e5cdcu: goto label_2e5cdc;
        case 0x2e5ce0u: goto label_2e5ce0;
        case 0x2e5ce4u: goto label_2e5ce4;
        case 0x2e5ce8u: goto label_2e5ce8;
        case 0x2e5cecu: goto label_2e5cec;
        case 0x2e5cf0u: goto label_2e5cf0;
        case 0x2e5cf4u: goto label_2e5cf4;
        case 0x2e5cf8u: goto label_2e5cf8;
        case 0x2e5cfcu: goto label_2e5cfc;
        default: break;
    }

    ctx->pc = 0x2e5bf0u;

label_2e5bf0:
    // 0x2e5bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e5bf4:
    // 0x2e5bf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e5bf8:
    // 0x2e5bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e5bfc:
    // 0x2e5bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c00:
    // 0x2e5c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5c04:
    // 0x2e5c04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5c08:
    // 0x2e5c08: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e5c08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5c0c:
    // 0x2e5c0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5c10:
    // 0x2e5c10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5c14:
    // 0x2e5c14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5c18:
    // 0x2e5c18: 0x40f809  jalr        $v0
label_2e5c1c:
    if (ctx->pc == 0x2E5C1Cu) {
        ctx->pc = 0x2E5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C18u;
        // 0x2e5c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C20u;
        goto label_2e5c20;
    }
    ctx->pc = 0x2E5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5C20u);
        ctx->pc = 0x2E5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C18u;
        // 0x2e5c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5C18u, 0x2E5C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5C20u;
label_2e5c20:
    // 0x2e5c20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5c24:
    // 0x2e5c24: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x2e5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
label_2e5c28:
    // 0x2e5c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5c2c:
    // 0x2e5c2c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2e5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2e5c30:
    // 0x2e5c30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5c34:
    // 0x2e5c34: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e5c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2e5c38:
    // 0x2e5c38: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2e5c3c:
    // 0x2e5c3c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2e5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2e5c40:
    // 0x2e5c40: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_2e5c44:
    if (ctx->pc == 0x2E5C44u) {
        ctx->pc = 0x2E5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C40u;
        // 0x2e5c44: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C48u;
        goto label_2e5c48;
    }
    ctx->pc = 0x2E5C40u;
    {
        const bool branch_taken_0x2e5c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c40) {
            ctx->pc = 0x2E5C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5C40u;
            // 0x2e5c44: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5C74u;
            goto label_2e5c74;
        }
    }
    ctx->pc = 0x2E5C48u;
label_2e5c48:
    // 0x2e5c48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5c4c:
    // 0x2e5c4c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e5c50:
    // 0x2e5c50: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2e5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2e5c54:
    // 0x2e5c54: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e5c58:
    // 0x2e5c58: 0xc0cd4ee  jal         func_3353B8
label_2e5c5c:
    if (ctx->pc == 0x2E5C5Cu) {
        ctx->pc = 0x2E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C58u;
        // 0x2e5c5c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C60u;
        goto label_2e5c60;
    }
    ctx->pc = 0x2E5C58u;
    SET_GPR_U32(ctx, 31, 0x2E5C60u);
    ctx->pc = 0x2E5C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C58u;
    // 0x2e5c5c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E5C58u, 0x2E5C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C60u;
label_2e5c60:
    // 0x2e5c60: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e5c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2e5c64:
    // 0x2e5c64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e5c68:
    if (ctx->pc == 0x2E5C68u) {
        ctx->pc = 0x2E5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C64u;
        // 0x2e5c68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C6Cu;
        goto label_2e5c6c;
    }
    ctx->pc = 0x2E5C64u;
    {
        const bool branch_taken_0x2e5c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C64u;
        // 0x2e5c68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c64) {
            ctx->pc = 0x2E5C70u;
            goto label_2e5c70;
        }
    }
    ctx->pc = 0x2E5C6Cu;
label_2e5c6c:
    // 0x2e5c6c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2e5c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2e5c70:
    // 0x2e5c70: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2e5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2e5c74:
    // 0x2e5c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5c78:
    // 0x2e5c78: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2e5c7c:
    if (ctx->pc == 0x2E5C7Cu) {
        ctx->pc = 0x2E5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C78u;
        // 0x2e5c7c: 0xa2000057  sb          $zero, 0x57($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C80u;
        goto label_2e5c80;
    }
    ctx->pc = 0x2E5C78u;
    {
        const bool branch_taken_0x2e5c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5c78) {
            ctx->pc = 0x2E5C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5C78u;
            // 0x2e5c7c: 0xa2000057  sb          $zero, 0x57($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5C80u;
            goto label_2e5c80;
        }
    }
    ctx->pc = 0x2E5C80u;
label_2e5c80:
    // 0x2e5c80: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x2e5c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2e5c84:
    // 0x2e5c84: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e5c88:
    // 0x2e5c88: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2e5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2e5c8c:
    // 0x2e5c8c: 0x92050057  lbu         $a1, 0x57($s0)
    ctx->pc = 0x2e5c8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
label_2e5c90:
    // 0x2e5c90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e5c94:
    // 0x2e5c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e5c98:
    // 0x2e5c98: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e5c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e5c9c:
    // 0x2e5c9c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2e5ca0:
    if (ctx->pc == 0x2E5CA0u) {
        ctx->pc = 0x2E5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C9Cu;
        // 0x2e5ca0: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CA4u;
        goto label_2e5ca4;
    }
    ctx->pc = 0x2E5C9Cu;
    {
        const bool branch_taken_0x2e5c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C9Cu;
        // 0x2e5ca0: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c9c) {
            ctx->pc = 0x2E5CCCu;
            goto label_2e5ccc;
        }
    }
    ctx->pc = 0x2E5CA4u;
label_2e5ca4:
    // 0x2e5ca4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5ca8:
    // 0x2e5ca8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5cac:
    // 0x2e5cac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5cb0:
    // 0x2e5cb0: 0x40f809  jalr        $v0
label_2e5cb4:
    if (ctx->pc == 0x2E5CB4u) {
        ctx->pc = 0x2E5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CB0u;
        // 0x2e5cb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CB8u;
        goto label_2e5cb8;
    }
    ctx->pc = 0x2E5CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5CB8u);
        ctx->pc = 0x2E5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CB0u;
        // 0x2e5cb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5CB0u, 0x2E5CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5CB8u;
label_2e5cb8:
    // 0x2e5cb8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2e5cbc:
    // 0x2e5cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5cc0:
    // 0x2e5cc0: 0xc08e150  jal         func_238540
label_2e5cc4:
    if (ctx->pc == 0x2E5CC4u) {
        ctx->pc = 0x2E5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CC0u;
        // 0x2e5cc4: 0x24a57228  addiu       $a1, $a1, 0x7228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CC8u;
        goto label_2e5cc8;
    }
    ctx->pc = 0x2E5CC0u;
    SET_GPR_U32(ctx, 31, 0x2E5CC8u);
    ctx->pc = 0x2E5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CC0u;
    // 0x2e5cc4: 0x24a57228  addiu       $a1, $a1, 0x7228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2E5CC0u, 0x2E5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CC8u;
label_2e5cc8:
    // 0x2e5cc8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2e5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2e5ccc:
    // 0x2e5ccc: 0xc0b996c  jal         func_2E65B0
label_2e5cd0:
    if (ctx->pc == 0x2E5CD0u) {
        ctx->pc = 0x2E5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CCCu;
        // 0x2e5cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CD4u;
        goto label_2e5cd4;
    }
    ctx->pc = 0x2E5CCCu;
    SET_GPR_U32(ctx, 31, 0x2E5CD4u);
    ctx->pc = 0x2E5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CCCu;
    // 0x2e5cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E65B0u, 0x2E5CCCu, 0x2E5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CD4u;
label_2e5cd4:
    // 0x2e5cd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e5cd8:
    // 0x2e5cd8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5cdc:
    // 0x2e5cdc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2e5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e5ce0:
    // 0x2e5ce0: 0x60f809  jalr        $v1
label_2e5ce4:
    if (ctx->pc == 0x2E5CE4u) {
        ctx->pc = 0x2E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CE0u;
        // 0x2e5ce4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CE8u;
        goto label_2e5ce8;
    }
    ctx->pc = 0x2E5CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E5CE8u);
        ctx->pc = 0x2E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CE0u;
        // 0x2e5ce4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5CE0u, 0x2E5CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5CE8u;
label_2e5ce8:
    // 0x2e5ce8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e5ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5cec:
    // 0x2e5cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5cf0:
    // 0x2e5cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5cf4:
    // 0x2e5cf4: 0x3e00008  jr          $ra
label_2e5cf8:
    if (ctx->pc == 0x2E5CF8u) {
        ctx->pc = 0x2E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CF4u;
        // 0x2e5cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CFCu;
        goto label_2e5cfc;
    }
    ctx->pc = 0x2E5CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CF4u;
        // 0x2e5cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5CFCu;
label_2e5cfc:
    // 0x2e5cfc: 0x0  nop
    ctx->pc = 0x2e5cfcu;
    // NOP
    ctx->pc = 0x2e5d00u;
}
