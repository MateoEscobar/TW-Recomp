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

// Function: sub_00215CE8
// Address: 0x215ce8 - 0x215da0
void sub_00215CE8_0x215ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CE8_0x215ce8");
#endif

    switch (ctx->pc) {
        case 0x215ce8u: goto label_215ce8;
        case 0x215cecu: goto label_215cec;
        case 0x215cf0u: goto label_215cf0;
        case 0x215cf4u: goto label_215cf4;
        case 0x215cf8u: goto label_215cf8;
        case 0x215cfcu: goto label_215cfc;
        case 0x215d00u: goto label_215d00;
        case 0x215d04u: goto label_215d04;
        case 0x215d08u: goto label_215d08;
        case 0x215d0cu: goto label_215d0c;
        case 0x215d10u: goto label_215d10;
        case 0x215d14u: goto label_215d14;
        case 0x215d18u: goto label_215d18;
        case 0x215d1cu: goto label_215d1c;
        case 0x215d20u: goto label_215d20;
        case 0x215d24u: goto label_215d24;
        case 0x215d28u: goto label_215d28;
        case 0x215d2cu: goto label_215d2c;
        case 0x215d30u: goto label_215d30;
        case 0x215d34u: goto label_215d34;
        case 0x215d38u: goto label_215d38;
        case 0x215d3cu: goto label_215d3c;
        case 0x215d40u: goto label_215d40;
        case 0x215d44u: goto label_215d44;
        case 0x215d48u: goto label_215d48;
        case 0x215d4cu: goto label_215d4c;
        case 0x215d50u: goto label_215d50;
        case 0x215d54u: goto label_215d54;
        case 0x215d58u: goto label_215d58;
        case 0x215d5cu: goto label_215d5c;
        case 0x215d60u: goto label_215d60;
        case 0x215d64u: goto label_215d64;
        case 0x215d68u: goto label_215d68;
        case 0x215d6cu: goto label_215d6c;
        case 0x215d70u: goto label_215d70;
        case 0x215d74u: goto label_215d74;
        case 0x215d78u: goto label_215d78;
        case 0x215d7cu: goto label_215d7c;
        case 0x215d80u: goto label_215d80;
        case 0x215d84u: goto label_215d84;
        case 0x215d88u: goto label_215d88;
        case 0x215d8cu: goto label_215d8c;
        case 0x215d90u: goto label_215d90;
        case 0x215d94u: goto label_215d94;
        case 0x215d98u: goto label_215d98;
        case 0x215d9cu: goto label_215d9c;
        default: break;
    }

    ctx->pc = 0x215ce8u;

label_215ce8:
    // 0x215ce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_215cec:
    // 0x215cec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215cf0:
    // 0x215cf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x215cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_215cf4:
    // 0x215cf4: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_215cf8:
    // 0x215cf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x215cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_215cfc:
    // 0x215cfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x215cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_215d00:
    // 0x215d00: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_215d04:
    // 0x215d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215d08:
    // 0x215d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_215d0c:
    // 0x215d0c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x215d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_215d10:
    // 0x215d10: 0x24a5a0d8  addiu       $a1, $a1, -0x5F28
    ctx->pc = 0x215d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942936));
label_215d14:
    // 0x215d14: 0x25089f70  addiu       $t0, $t0, -0x6090
    ctx->pc = 0x215d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942576));
label_215d18:
    // 0x215d18: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x215d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_215d1c:
    // 0x215d1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215d20:
    // 0x215d20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x215d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_215d24:
    // 0x215d24: 0x24090147  addiu       $t1, $zero, 0x147
    ctx->pc = 0x215d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
label_215d28:
    // 0x215d28: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_215d2c:
    // 0x215d2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x215d2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215d30:
    // 0x215d30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x215d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_215d34:
    // 0x215d34: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x215d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_215d38:
    // 0x215d38: 0x40f809  jalr        $v0
label_215d3c:
    if (ctx->pc == 0x215D3Cu) {
        ctx->pc = 0x215D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D38u;
        // 0x215d3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D40u;
        goto label_215d40;
    }
    ctx->pc = 0x215D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215D40u);
        ctx->pc = 0x215D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D38u;
        // 0x215d3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D38u, 0x215D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215D40u;
label_215d40:
    // 0x215d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_215d44:
    if (ctx->pc == 0x215D44u) {
        ctx->pc = 0x215D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D40u;
        // 0x215d44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D48u;
        goto label_215d48;
    }
    ctx->pc = 0x215D40u;
    {
        const bool branch_taken_0x215d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D40u;
        // 0x215d44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d40) {
            ctx->pc = 0x215D50u;
            goto label_215d50;
        }
    }
    ctx->pc = 0x215D48u;
label_215d48:
    // 0x215d48: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x215d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_215d4c:
    // 0x215d4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x215d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_215d50:
    // 0x215d50: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x215d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_215d54:
    // 0x215d54: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x215d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_215d58:
    // 0x215d58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x215d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_215d5c:
    // 0x215d5c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_215d60:
    if (ctx->pc == 0x215D60u) {
        ctx->pc = 0x215D64u;
        goto label_215d64;
    }
    ctx->pc = 0x215D5Cu;
    {
        const bool branch_taken_0x215d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x215d5c) {
            ctx->pc = 0x215D80u;
            goto label_215d80;
        }
    }
    ctx->pc = 0x215D64u;
label_215d64:
    // 0x215d64: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_215d68:
    if (ctx->pc == 0x215D68u) {
        ctx->pc = 0x215D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D64u;
        // 0x215d68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D6Cu;
        goto label_215d6c;
    }
    ctx->pc = 0x215D64u;
    {
        const bool branch_taken_0x215d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D64u;
        // 0x215d68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d64) {
            ctx->pc = 0x215D70u;
            goto label_215d70;
        }
    }
    ctx->pc = 0x215D6Cu;
label_215d6c:
    // 0x215d6c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x215d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_215d70:
    // 0x215d70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_215d74:
    // 0x215d74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_215d78:
    // 0x215d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_215d7c:
    if (ctx->pc == 0x215D7Cu) {
        ctx->pc = 0x215D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D78u;
        // 0x215d7c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D80u;
        goto label_215d80;
    }
    ctx->pc = 0x215D78u;
    {
        const bool branch_taken_0x215d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D78u;
        // 0x215d7c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d78) {
            ctx->pc = 0x215D88u;
            goto label_215d88;
        }
    }
    ctx->pc = 0x215D80u;
label_215d80:
    // 0x215d80: 0xc13b288  jal         func_4ECA20
label_215d84:
    if (ctx->pc == 0x215D84u) {
        ctx->pc = 0x215D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D80u;
        // 0x215d84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D88u;
        goto label_215d88;
    }
    ctx->pc = 0x215D80u;
    SET_GPR_U32(ctx, 31, 0x215D88u);
    ctx->pc = 0x215D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D80u;
    // 0x215d84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECA20u, 0x215D80u, 0x215D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D88u;
label_215d88:
    // 0x215d88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x215d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_215d8c:
    // 0x215d8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x215d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_215d90:
    // 0x215d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215d94:
    // 0x215d94: 0x3e00008  jr          $ra
label_215d98:
    if (ctx->pc == 0x215D98u) {
        ctx->pc = 0x215D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D94u;
        // 0x215d98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D9Cu;
        goto label_215d9c;
    }
    ctx->pc = 0x215D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D94u;
        // 0x215d98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D9Cu;
label_215d9c:
    // 0x215d9c: 0x0  nop
    ctx->pc = 0x215d9cu;
    // NOP
    ctx->pc = 0x215da0u;
}
