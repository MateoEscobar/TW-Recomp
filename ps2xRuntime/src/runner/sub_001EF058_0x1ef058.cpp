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

// Function: sub_001EF058
// Address: 0x1ef058 - 0x1ef150
void sub_001EF058_0x1ef058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF058_0x1ef058");
#endif

    switch (ctx->pc) {
        case 0x1ef058u: goto label_1ef058;
        case 0x1ef05cu: goto label_1ef05c;
        case 0x1ef060u: goto label_1ef060;
        case 0x1ef064u: goto label_1ef064;
        case 0x1ef068u: goto label_1ef068;
        case 0x1ef06cu: goto label_1ef06c;
        case 0x1ef070u: goto label_1ef070;
        case 0x1ef074u: goto label_1ef074;
        case 0x1ef078u: goto label_1ef078;
        case 0x1ef07cu: goto label_1ef07c;
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef084u: goto label_1ef084;
        case 0x1ef088u: goto label_1ef088;
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        default: break;
    }

    ctx->pc = 0x1ef058u;

label_1ef058:
    // 0x1ef058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ef05c:
    // 0x1ef05c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ef060:
    // 0x1ef060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef064:
    // 0x1ef064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef068:
    // 0x1ef068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ef06c:
    // 0x1ef06c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ef06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ef070:
    // 0x1ef070: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1ef074:
    if (ctx->pc == 0x1EF074u) {
        ctx->pc = 0x1EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF070u;
        // 0x1ef074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF078u;
        goto label_1ef078;
    }
    ctx->pc = 0x1EF070u;
    {
        const bool branch_taken_0x1ef070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF070u;
        // 0x1ef074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef070) {
            ctx->pc = 0x1EF130u;
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF078u;
label_1ef078:
    // 0x1ef078: 0xc06a3aa  jal         func_1A8EA8
label_1ef07c:
    if (ctx->pc == 0x1EF07Cu) {
        ctx->pc = 0x1EF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF078u;
        // 0x1ef07c: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF080u;
        goto label_1ef080;
    }
    ctx->pc = 0x1EF078u;
    SET_GPR_U32(ctx, 31, 0x1EF080u);
    ctx->pc = 0x1EF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF078u;
    // 0x1ef07c: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1EF078u, 0x1EF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF080u;
label_1ef080:
    // 0x1ef080: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1ef084:
    if (ctx->pc == 0x1EF084u) {
        ctx->pc = 0x1EF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF080u;
        // 0x1ef084: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF088u;
        goto label_1ef088;
    }
    ctx->pc = 0x1EF080u;
    {
        const bool branch_taken_0x1ef080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF080u;
        // 0x1ef084: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef080) {
            ctx->pc = 0x1EF134u;
            goto label_1ef134;
        }
    }
    ctx->pc = 0x1EF088u;
label_1ef088:
    // 0x1ef088: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1ef08c:
    // 0x1ef08c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1ef090:
    // 0x1ef090: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1ef094:
    // 0x1ef094: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x1ef094u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ef098:
    // 0x1ef098: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ef09c:
    // 0x1ef09c: 0x40f809  jalr        $v0
label_1ef0a0:
    if (ctx->pc == 0x1EF0A0u) {
        ctx->pc = 0x1EF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF09Cu;
        // 0x1ef0a0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0A4u;
        goto label_1ef0a4;
    }
    ctx->pc = 0x1EF09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF0A4u);
        ctx->pc = 0x1EF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF09Cu;
        // 0x1ef0a0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF09Cu, 0x1EF0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF0A4u;
label_1ef0a4:
    // 0x1ef0a4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1ef0a8:
    if (ctx->pc == 0x1EF0A8u) {
        ctx->pc = 0x1EF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0A4u;
        // 0x1ef0a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0ACu;
        goto label_1ef0ac;
    }
    ctx->pc = 0x1EF0A4u;
    {
        const bool branch_taken_0x1ef0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0A4u;
        // 0x1ef0a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0a4) {
            ctx->pc = 0x1EF134u;
            goto label_1ef134;
        }
    }
    ctx->pc = 0x1EF0ACu;
label_1ef0ac:
    // 0x1ef0ac: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_1ef0b0:
    // 0x1ef0b0: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x1ef0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1ef0b4:
    // 0x1ef0b4: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1ef0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1ef0b8:
    // 0x1ef0b8: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ef0bc:
    // 0x1ef0bc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ef0c0:
    // 0x1ef0c0: 0x40f809  jalr        $v0
label_1ef0c4:
    if (ctx->pc == 0x1EF0C4u) {
        ctx->pc = 0x1EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C0u;
        // 0x1ef0c4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0C8u;
        goto label_1ef0c8;
    }
    ctx->pc = 0x1EF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF0C8u);
        ctx->pc = 0x1EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C0u;
        // 0x1ef0c4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0C0u, 0x1EF0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF0C8u;
label_1ef0c8:
    // 0x1ef0c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ef0cc:
    if (ctx->pc == 0x1EF0CCu) {
        ctx->pc = 0x1EF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C8u;
        // 0x1ef0cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0D0u;
        goto label_1ef0d0;
    }
    ctx->pc = 0x1EF0C8u;
    {
        const bool branch_taken_0x1ef0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C8u;
        // 0x1ef0cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0c8) {
            ctx->pc = 0x1EF134u;
            goto label_1ef134;
        }
    }
    ctx->pc = 0x1EF0D0u;
label_1ef0d0:
    // 0x1ef0d0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x1ef0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_1ef0d4:
    // 0x1ef0d4: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x1ef0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1ef0d8:
    // 0x1ef0d8: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1ef0dc:
    // 0x1ef0dc: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x1ef0dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ef0e0:
    // 0x1ef0e0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ef0e4:
    // 0x1ef0e4: 0x40f809  jalr        $v0
label_1ef0e8:
    if (ctx->pc == 0x1EF0E8u) {
        ctx->pc = 0x1EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0E4u;
        // 0x1ef0e8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0ECu;
        goto label_1ef0ec;
    }
    ctx->pc = 0x1EF0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF0ECu);
        ctx->pc = 0x1EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0E4u;
        // 0x1ef0e8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0E4u, 0x1EF0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF0ECu;
label_1ef0ec:
    // 0x1ef0ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ef0f0:
    if (ctx->pc == 0x1EF0F0u) {
        ctx->pc = 0x1EF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0ECu;
        // 0x1ef0f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0F4u;
        goto label_1ef0f4;
    }
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0ECu;
        // 0x1ef0f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF134u;
            goto label_1ef134;
        }
    }
    ctx->pc = 0x1EF0F4u;
label_1ef0f4:
    // 0x1ef0f4: 0x8e050184  lw          $a1, 0x184($s0)
    ctx->pc = 0x1ef0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1ef0f8:
    // 0x1ef0f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ef0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ef0fc:
    // 0x1ef0fc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ef0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ef100:
    // 0x1ef100: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ef100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ef104:
    // 0x1ef104: 0x40f809  jalr        $v0
label_1ef108:
    if (ctx->pc == 0x1EF108u) {
        ctx->pc = 0x1EF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF104u;
        // 0x1ef108: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF10Cu;
        goto label_1ef10c;
    }
    ctx->pc = 0x1EF104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF10Cu);
        ctx->pc = 0x1EF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF104u;
        // 0x1ef108: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF104u, 0x1EF10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF10Cu;
label_1ef10c:
    // 0x1ef10c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ef110:
    if (ctx->pc == 0x1EF110u) {
        ctx->pc = 0x1EF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF10Cu;
        // 0x1ef110: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF114u;
        goto label_1ef114;
    }
    ctx->pc = 0x1EF10Cu;
    {
        const bool branch_taken_0x1ef10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF10Cu;
        // 0x1ef110: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef10c) {
            ctx->pc = 0x1EF134u;
            goto label_1ef134;
        }
    }
    ctx->pc = 0x1EF114u;
label_1ef114:
    // 0x1ef114: 0x8e050180  lw          $a1, 0x180($s0)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1ef118:
    // 0x1ef118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ef118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ef11c:
    // 0x1ef11c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ef11cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ef120:
    // 0x1ef120: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ef124:
    // 0x1ef124: 0x40f809  jalr        $v0
label_1ef128:
    if (ctx->pc == 0x1EF128u) {
        ctx->pc = 0x1EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF124u;
        // 0x1ef128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF12Cu;
        goto label_1ef12c;
    }
    ctx->pc = 0x1EF124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF12Cu);
        ctx->pc = 0x1EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF124u;
        // 0x1ef128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF124u, 0x1EF12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF12Cu;
label_1ef12c:
    // 0x1ef12c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1ef12cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef130:
    // 0x1ef130: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ef130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef134:
    // 0x1ef134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef138:
    // 0x1ef138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef13c:
    // 0x1ef13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef140:
    // 0x1ef140: 0x3e00008  jr          $ra
label_1ef144:
    if (ctx->pc == 0x1EF144u) {
        ctx->pc = 0x1EF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF140u;
        // 0x1ef144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF148u;
        goto label_1ef148;
    }
    ctx->pc = 0x1EF140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF140u;
        // 0x1ef144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF148u;
label_1ef148:
    // 0x1ef148: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ef14c:
    // 0x1ef14c: 0x0  nop
    ctx->pc = 0x1ef14cu;
    // NOP
    ctx->pc = 0x1ef150u;
}
