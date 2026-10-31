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

// Function: sub_0015DFD0
// Address: 0x15dfd0 - 0x15e048
void sub_0015DFD0_0x15dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DFD0_0x15dfd0");
#endif

    switch (ctx->pc) {
        case 0x15dfd0u: goto label_15dfd0;
        case 0x15dfd4u: goto label_15dfd4;
        case 0x15dfd8u: goto label_15dfd8;
        case 0x15dfdcu: goto label_15dfdc;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfe4u: goto label_15dfe4;
        case 0x15dfe8u: goto label_15dfe8;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dff0u: goto label_15dff0;
        case 0x15dff4u: goto label_15dff4;
        case 0x15dff8u: goto label_15dff8;
        case 0x15dffcu: goto label_15dffc;
        case 0x15e000u: goto label_15e000;
        case 0x15e004u: goto label_15e004;
        case 0x15e008u: goto label_15e008;
        case 0x15e00cu: goto label_15e00c;
        case 0x15e010u: goto label_15e010;
        case 0x15e014u: goto label_15e014;
        case 0x15e018u: goto label_15e018;
        case 0x15e01cu: goto label_15e01c;
        case 0x15e020u: goto label_15e020;
        case 0x15e024u: goto label_15e024;
        case 0x15e028u: goto label_15e028;
        case 0x15e02cu: goto label_15e02c;
        case 0x15e030u: goto label_15e030;
        case 0x15e034u: goto label_15e034;
        case 0x15e038u: goto label_15e038;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e040u: goto label_15e040;
        case 0x15e044u: goto label_15e044;
        default: break;
    }

    ctx->pc = 0x15dfd0u;

label_15dfd0:
    // 0x15dfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15dfd4:
    // 0x15dfd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15dfd8:
    // 0x15dfd8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15dfdc:
    // 0x15dfdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15dfe0:
    // 0x15dfe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15dfe4:
    // 0x15dfe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15dfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15dfe8:
    // 0x15dfe8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15dfec:
    // 0x15dfec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15dfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15dff0:
    // 0x15dff0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15dff4:
    // 0x15dff4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_15dff8:
    // 0x15dff8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_15dffc:
    // 0x15dffc: 0x40f809  jalr        $v0
label_15e000:
    if (ctx->pc == 0x15E000u) {
        ctx->pc = 0x15E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFFCu;
        // 0x15e000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E004u;
        goto label_15e004;
    }
    ctx->pc = 0x15DFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E004u);
        ctx->pc = 0x15E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFFCu;
        // 0x15e000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DFFCu, 0x15E004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E004u;
label_15e004:
    // 0x15e004: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15e008:
    // 0x15e008: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15e00c:
    // 0x15e00c: 0xac626690  sw          $v0, 0x6690($v1)
    ctx->pc = 0x15e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26256), GPR_U32(ctx, 2));
label_15e010:
    // 0x15e010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e014:
    // 0x15e014: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15e018:
    // 0x15e018: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x15e018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_15e01c:
    // 0x15e01c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x15e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_15e020:
    // 0x15e020: 0x40f809  jalr        $v0
label_15e024:
    if (ctx->pc == 0x15E024u) {
        ctx->pc = 0x15E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E020u;
        // 0x15e024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E028u;
        goto label_15e028;
    }
    ctx->pc = 0x15E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E028u);
        ctx->pc = 0x15E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E020u;
        // 0x15e024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E020u, 0x15E028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E028u;
label_15e028:
    // 0x15e028: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15e02c:
    // 0x15e02c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15e02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e030:
    // 0x15e030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e034:
    // 0x15e034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e038:
    // 0x15e038: 0xac626694  sw          $v0, 0x6694($v1)
    ctx->pc = 0x15e038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26260), GPR_U32(ctx, 2));
label_15e03c:
    // 0x15e03c: 0x3e00008  jr          $ra
label_15e040:
    if (ctx->pc == 0x15E040u) {
        ctx->pc = 0x15E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E03Cu;
        // 0x15e040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E044u;
        goto label_15e044;
    }
    ctx->pc = 0x15E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E03Cu;
        // 0x15e040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E044u;
label_15e044:
    // 0x15e044: 0x0  nop
    ctx->pc = 0x15e044u;
    // NOP
    ctx->pc = 0x15e048u;
}
