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

// Function: sub_00237D48
// Address: 0x237d48 - 0x237db8
void sub_00237D48_0x237d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237D48_0x237d48");
#endif

    switch (ctx->pc) {
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        default: break;
    }

    ctx->pc = 0x237d48u;

label_237d48:
    // 0x237d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_237d4c:
    // 0x237d4c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_237d50:
    // 0x237d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_237d54:
    // 0x237d54: 0xc0e4060  jal         func_390180
label_237d58:
    if (ctx->pc == 0x237D58u) {
        ctx->pc = 0x237D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D54u;
        // 0x237d58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D5Cu;
        goto label_237d5c;
    }
    ctx->pc = 0x237D54u;
    SET_GPR_U32(ctx, 31, 0x237D5Cu);
    ctx->pc = 0x237D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D54u;
    // 0x237d58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237D54u, 0x237D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D5Cu;
label_237d5c:
    // 0x237d5c: 0xc08a61a  jal         func_229868
label_237d60:
    if (ctx->pc == 0x237D60u) {
        ctx->pc = 0x237D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D5Cu;
        // 0x237d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D64u;
        goto label_237d64;
    }
    ctx->pc = 0x237D5Cu;
    SET_GPR_U32(ctx, 31, 0x237D64u);
    ctx->pc = 0x237D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D5Cu;
    // 0x237d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237D5Cu, 0x237D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D64u;
label_237d64:
    // 0x237d64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_237d68:
    if (ctx->pc == 0x237D68u) {
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D6Cu;
        goto label_237d6c;
    }
    ctx->pc = 0x237D64u;
    {
        const bool branch_taken_0x237d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d64) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237D6Cu;
label_237d6c:
    // 0x237d6c: 0xc089bfc  jal         func_226FF0
label_237d70:
    if (ctx->pc == 0x237D70u) {
        ctx->pc = 0x237D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D6Cu;
        // 0x237d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D74u;
        goto label_237d74;
    }
    ctx->pc = 0x237D6Cu;
    SET_GPR_U32(ctx, 31, 0x237D74u);
    ctx->pc = 0x237D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D6Cu;
    // 0x237d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x237D6Cu, 0x237D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D74u;
label_237d74:
    // 0x237d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d78:
    // 0x237d78: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_237d7c:
    if (ctx->pc == 0x237D7Cu) {
        ctx->pc = 0x237D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D78u;
        // 0x237d7c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D80u;
        goto label_237d80;
    }
    ctx->pc = 0x237D78u;
    {
        const bool branch_taken_0x237d78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x237d78) {
            ctx->pc = 0x237D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D78u;
            // 0x237d7c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D8Cu;
            goto label_237d8c;
        }
    }
    ctx->pc = 0x237D80u;
label_237d80:
    // 0x237d80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x237d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_237d84:
    // 0x237d84: 0x10000007  b           . + 4 + (0x7 << 2)
label_237d88:
    if (ctx->pc == 0x237D88u) {
        ctx->pc = 0x237D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D84u;
        // 0x237d88: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D8Cu;
        goto label_237d8c;
    }
    ctx->pc = 0x237D84u;
    {
        const bool branch_taken_0x237d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D84u;
        // 0x237d88: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d84) {
            ctx->pc = 0x237DA4u;
            goto label_237da4;
        }
    }
    ctx->pc = 0x237D8Cu;
label_237d8c:
    // 0x237d8c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x237d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_237d90:
    // 0x237d90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x237d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_237d94:
    // 0x237d94: 0x40f809  jalr        $v0
label_237d98:
    if (ctx->pc == 0x237D98u) {
        ctx->pc = 0x237D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D94u;
        // 0x237d98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D9Cu;
        goto label_237d9c;
    }
    ctx->pc = 0x237D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237D9Cu);
        ctx->pc = 0x237D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D94u;
        // 0x237d98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237D94u, 0x237D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237D9Cu;
label_237d9c:
    // 0x237d9c: 0xc0e401a  jal         func_390068
label_237da0:
    if (ctx->pc == 0x237DA0u) {
        ctx->pc = 0x237DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D9Cu;
        // 0x237da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DA4u;
        goto label_237da4;
    }
    ctx->pc = 0x237D9Cu;
    SET_GPR_U32(ctx, 31, 0x237DA4u);
    ctx->pc = 0x237DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D9Cu;
    // 0x237da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390068u, 0x237D9Cu, 0x237DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DA4u;
label_237da4:
    // 0x237da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237da8:
    // 0x237da8: 0x3e00008  jr          $ra
label_237dac:
    if (ctx->pc == 0x237DACu) {
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DB0u;
        goto label_237db0;
    }
    ctx->pc = 0x237DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237DB0u;
label_237db0:
    // 0x237db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x237db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_237db4:
    // 0x237db4: 0x0  nop
    ctx->pc = 0x237db4u;
    // NOP
    ctx->pc = 0x237db8u;
}
