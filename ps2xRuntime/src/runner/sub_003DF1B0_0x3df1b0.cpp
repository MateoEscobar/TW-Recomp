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

// Function: sub_003DF1B0
// Address: 0x3df1b0 - 0x3df228
void sub_003DF1B0_0x3df1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF1B0_0x3df1b0");
#endif

    switch (ctx->pc) {
        case 0x3df1b0u: goto label_3df1b0;
        case 0x3df1b4u: goto label_3df1b4;
        case 0x3df1b8u: goto label_3df1b8;
        case 0x3df1bcu: goto label_3df1bc;
        case 0x3df1c0u: goto label_3df1c0;
        case 0x3df1c4u: goto label_3df1c4;
        case 0x3df1c8u: goto label_3df1c8;
        case 0x3df1ccu: goto label_3df1cc;
        case 0x3df1d0u: goto label_3df1d0;
        case 0x3df1d4u: goto label_3df1d4;
        case 0x3df1d8u: goto label_3df1d8;
        case 0x3df1dcu: goto label_3df1dc;
        case 0x3df1e0u: goto label_3df1e0;
        case 0x3df1e4u: goto label_3df1e4;
        case 0x3df1e8u: goto label_3df1e8;
        case 0x3df1ecu: goto label_3df1ec;
        case 0x3df1f0u: goto label_3df1f0;
        case 0x3df1f4u: goto label_3df1f4;
        case 0x3df1f8u: goto label_3df1f8;
        case 0x3df1fcu: goto label_3df1fc;
        case 0x3df200u: goto label_3df200;
        case 0x3df204u: goto label_3df204;
        case 0x3df208u: goto label_3df208;
        case 0x3df20cu: goto label_3df20c;
        case 0x3df210u: goto label_3df210;
        case 0x3df214u: goto label_3df214;
        case 0x3df218u: goto label_3df218;
        case 0x3df21cu: goto label_3df21c;
        case 0x3df220u: goto label_3df220;
        case 0x3df224u: goto label_3df224;
        default: break;
    }

    ctx->pc = 0x3df1b0u;

label_3df1b0:
    // 0x3df1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3df1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3df1b4:
    // 0x3df1b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3df1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3df1b8:
    // 0x3df1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3df1bc:
    // 0x3df1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3df1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3df1c0:
    // 0x3df1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df1c4:
    // 0x3df1c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3df1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3df1c8:
    // 0x3df1c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3df1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3df1cc:
    // 0x3df1cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3df1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3df1d0:
    // 0x3df1d0: 0x40f809  jalr        $v0
label_3df1d4:
    if (ctx->pc == 0x3DF1D4u) {
        ctx->pc = 0x3DF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1D0u;
        // 0x3df1d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1D8u;
        goto label_3df1d8;
    }
    ctx->pc = 0x3DF1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF1D8u);
        ctx->pc = 0x3DF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1D0u;
        // 0x3df1d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF1D0u, 0x3DF1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF1D8u;
label_3df1d8:
    // 0x3df1d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3df1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df1dc:
    // 0x3df1dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3df1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df1e0:
    // 0x3df1e0: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x3df1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_3df1e4:
    // 0x3df1e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3df1e8:
    if (ctx->pc == 0x3DF1E8u) {
        ctx->pc = 0x3DF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1E4u;
        // 0x3df1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1ECu;
        goto label_3df1ec;
    }
    ctx->pc = 0x3DF1E4u;
    {
        const bool branch_taken_0x3df1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1E4u;
        // 0x3df1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df1e4) {
            ctx->pc = 0x3DF214u;
            goto label_3df214;
        }
    }
    ctx->pc = 0x3DF1ECu;
label_3df1ec:
    // 0x3df1ec: 0xc0e9694  jal         func_3A5A50
label_3df1f0:
    if (ctx->pc == 0x3DF1F0u) {
        ctx->pc = 0x3DF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1ECu;
        // 0x3df1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1F4u;
        goto label_3df1f4;
    }
    ctx->pc = 0x3DF1ECu;
    SET_GPR_U32(ctx, 31, 0x3DF1F4u);
    ctx->pc = 0x3DF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1ECu;
    // 0x3df1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DF1ECu, 0x3DF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1F4u;
label_3df1f4:
    // 0x3df1f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3df1f8:
    if (ctx->pc == 0x3DF1F8u) {
        ctx->pc = 0x3DF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1F4u;
        // 0x3df1f8: 0x9624006e  lhu         $a0, 0x6E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1FCu;
        goto label_3df1fc;
    }
    ctx->pc = 0x3DF1F4u;
    {
        const bool branch_taken_0x3df1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df1f4) {
            ctx->pc = 0x3DF1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF1F4u;
            // 0x3df1f8: 0x9624006e  lhu         $a0, 0x6E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF204u;
            goto label_3df204;
        }
    }
    ctx->pc = 0x3DF1FCu;
label_3df1fc:
    // 0x3df1fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3df200:
    if (ctx->pc == 0x3DF200u) {
        ctx->pc = 0x3DF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1FCu;
        // 0x3df200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF204u;
        goto label_3df204;
    }
    ctx->pc = 0x3DF1FCu;
    {
        const bool branch_taken_0x3df1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1FCu;
        // 0x3df200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df1fc) {
            ctx->pc = 0x3DF214u;
            goto label_3df214;
        }
    }
    ctx->pc = 0x3DF204u;
label_3df204:
    // 0x3df204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df208:
    // 0x3df208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3df208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df20c:
    // 0x3df20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3df20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3df210:
    // 0x3df210: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3df210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3df214:
    // 0x3df214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3df214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df218:
    // 0x3df218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df21c:
    // 0x3df21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3df21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df220:
    // 0x3df220: 0x3e00008  jr          $ra
label_3df224:
    if (ctx->pc == 0x3DF224u) {
        ctx->pc = 0x3DF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF220u;
        // 0x3df224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF228u;
        goto label_fallthrough_0x3df220;
    }
    ctx->pc = 0x3DF220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF220u;
        // 0x3df224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3df220:
    ctx->pc = 0x3DF228u;
}
