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

// Function: sub_00485EC0
// Address: 0x485ec0 - 0x485f28
void sub_00485EC0_0x485ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485EC0_0x485ec0");
#endif

    switch (ctx->pc) {
        case 0x485ec0u: goto label_485ec0;
        case 0x485ec4u: goto label_485ec4;
        case 0x485ec8u: goto label_485ec8;
        case 0x485eccu: goto label_485ecc;
        case 0x485ed0u: goto label_485ed0;
        case 0x485ed4u: goto label_485ed4;
        case 0x485ed8u: goto label_485ed8;
        case 0x485edcu: goto label_485edc;
        case 0x485ee0u: goto label_485ee0;
        case 0x485ee4u: goto label_485ee4;
        case 0x485ee8u: goto label_485ee8;
        case 0x485eecu: goto label_485eec;
        case 0x485ef0u: goto label_485ef0;
        case 0x485ef4u: goto label_485ef4;
        case 0x485ef8u: goto label_485ef8;
        case 0x485efcu: goto label_485efc;
        case 0x485f00u: goto label_485f00;
        case 0x485f04u: goto label_485f04;
        case 0x485f08u: goto label_485f08;
        case 0x485f0cu: goto label_485f0c;
        case 0x485f10u: goto label_485f10;
        case 0x485f14u: goto label_485f14;
        case 0x485f18u: goto label_485f18;
        case 0x485f1cu: goto label_485f1c;
        case 0x485f20u: goto label_485f20;
        case 0x485f24u: goto label_485f24;
        default: break;
    }

    ctx->pc = 0x485ec0u;

label_485ec0:
    // 0x485ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_485ec4:
    // 0x485ec4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_485ec8:
    // 0x485ec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x485ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_485ecc:
    // 0x485ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x485eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485ed0:
    // 0x485ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485ed4:
    // 0x485ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485ed8:
    // 0x485ed8: 0x8c62ad78  lw          $v0, -0x5288($v1)
    ctx->pc = 0x485ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946168)));
label_485edc:
    // 0x485edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485ee0:
    // 0x485ee0: 0x40f809  jalr        $v0
label_485ee4:
    if (ctx->pc == 0x485EE4u) {
        ctx->pc = 0x485EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EE0u;
        // 0x485ee4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485EE8u;
        goto label_485ee8;
    }
    ctx->pc = 0x485EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485EE8u);
        ctx->pc = 0x485EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EE0u;
        // 0x485ee4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485EE0u, 0x485EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485EE8u;
label_485ee8:
    // 0x485ee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_485eec:
    if (ctx->pc == 0x485EECu) {
        ctx->pc = 0x485EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EE8u;
        // 0x485eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485EF0u;
        goto label_485ef0;
    }
    ctx->pc = 0x485EE8u;
    {
        const bool branch_taken_0x485ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EE8u;
        // 0x485eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485ee8) {
            ctx->pc = 0x485F10u;
            goto label_485f10;
        }
    }
    ctx->pc = 0x485EF0u;
label_485ef0:
    // 0x485ef0: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x485ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_485ef4:
    // 0x485ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x485ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_485ef8:
    // 0x485ef8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_485efc:
    if (ctx->pc == 0x485EFCu) {
        ctx->pc = 0x485EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EF8u;
        // 0x485efc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F00u;
        goto label_485f00;
    }
    ctx->pc = 0x485EF8u;
    {
        const bool branch_taken_0x485ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485ef8) {
            ctx->pc = 0x485EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485EF8u;
            // 0x485efc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485F10u;
            goto label_485f10;
        }
    }
    ctx->pc = 0x485F00u;
label_485f00:
    // 0x485f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x485f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_485f04:
    // 0x485f04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x485f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_485f08:
    // 0x485f08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x485f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_485f0c:
    // 0x485f0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485f10:
    // 0x485f10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x485f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485f14:
    // 0x485f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485f18:
    // 0x485f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485f1c:
    // 0x485f1c: 0x3e00008  jr          $ra
label_485f20:
    if (ctx->pc == 0x485F20u) {
        ctx->pc = 0x485F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F1Cu;
        // 0x485f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F24u;
        goto label_485f24;
    }
    ctx->pc = 0x485F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F1Cu;
        // 0x485f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485F24u;
label_485f24:
    // 0x485f24: 0x0  nop
    ctx->pc = 0x485f24u;
    // NOP
    ctx->pc = 0x485f28u;
}
