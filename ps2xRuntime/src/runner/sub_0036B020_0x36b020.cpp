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

// Function: sub_0036B020
// Address: 0x36b020 - 0x36b220
void sub_0036B020_0x36b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B020_0x36b020");
#endif

    switch (ctx->pc) {
        case 0x36b05cu: goto label_36b05c;
        case 0x36b074u: goto label_36b074;
        case 0x36b08cu: goto label_36b08c;
        case 0x36b0a4u: goto label_36b0a4;
        case 0x36b0bcu: goto label_36b0bc;
        case 0x36b0d4u: goto label_36b0d4;
        case 0x36b0ecu: goto label_36b0ec;
        case 0x36b0fcu: goto label_36b0fc;
        case 0x36b114u: goto label_36b114;
        case 0x36b11cu: goto label_36b11c;
        case 0x36b130u: goto label_36b130;
        case 0x36b138u: goto label_36b138;
        case 0x36b14cu: goto label_36b14c;
        case 0x36b154u: goto label_36b154;
        case 0x36b168u: goto label_36b168;
        case 0x36b170u: goto label_36b170;
        case 0x36b184u: goto label_36b184;
        case 0x36b18cu: goto label_36b18c;
        case 0x36b1a0u: goto label_36b1a0;
        case 0x36b1a8u: goto label_36b1a8;
        case 0x36b1bcu: goto label_36b1bc;
        case 0x36b1c4u: goto label_36b1c4;
        case 0x36b1e4u: goto label_36b1e4;
        case 0x36b1f4u: goto label_36b1f4;
        default: break;
    }

    ctx->pc = 0x36b020u;

    // 0x36b020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36b024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b028: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x36b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x36b02c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b030: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x36b030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b034: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x36b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x36b038: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x36b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x36b03c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x36b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x36b040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36b040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b044: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x36b048: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x36b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x36b04c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x36b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x36b050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b054: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B054u;
    SET_GPR_U32(ctx, 31, 0x36B05Cu);
    ctx->pc = 0x36B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B054u;
    // 0x36b058: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B054u, 0x36B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B05Cu;
label_36b05c:
    // 0x36b05c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x36B05Cu;
    {
        const bool branch_taken_0x36b05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B05Cu;
        // 0x36b060: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b05c) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B064u;
    // 0x36b064: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b068: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b06c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B06Cu;
    SET_GPR_U32(ctx, 31, 0x36B074u);
    ctx->pc = 0x36B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B06Cu;
    // 0x36b070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B06Cu, 0x36B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B074u;
label_36b074:
    // 0x36b074: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x36B074u;
    {
        const bool branch_taken_0x36b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B074u;
        // 0x36b078: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b074) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B07Cu;
    // 0x36b07c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b080: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b084: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B084u;
    SET_GPR_U32(ctx, 31, 0x36B08Cu);
    ctx->pc = 0x36B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B084u;
    // 0x36b088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B084u, 0x36B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B08Cu;
label_36b08c:
    // 0x36b08c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x36B08Cu;
    {
        const bool branch_taken_0x36b08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B08Cu;
        // 0x36b090: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b08c) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B094u;
    // 0x36b094: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36b098: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b09c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B09Cu;
    SET_GPR_U32(ctx, 31, 0x36B0A4u);
    ctx->pc = 0x36B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B09Cu;
    // 0x36b0a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B09Cu, 0x36B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0A4u;
label_36b0a4:
    // 0x36b0a4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x36B0A4u;
    {
        const bool branch_taken_0x36b0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0A4u;
        // 0x36b0a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0a4) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B0ACu;
    // 0x36b0ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b0b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b0b4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B0B4u;
    SET_GPR_U32(ctx, 31, 0x36B0BCu);
    ctx->pc = 0x36B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0B4u;
    // 0x36b0b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B0B4u, 0x36B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0BCu;
label_36b0bc:
    // 0x36b0bc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x36B0BCu;
    {
        const bool branch_taken_0x36b0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0BCu;
        // 0x36b0c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0bc) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B0C4u;
    // 0x36b0c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b0c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b0cc: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B0CCu;
    SET_GPR_U32(ctx, 31, 0x36B0D4u);
    ctx->pc = 0x36B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0CCu;
    // 0x36b0d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B0CCu, 0x36B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0D4u;
label_36b0d4:
    // 0x36b0d4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x36B0D4u;
    {
        const bool branch_taken_0x36b0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0D4u;
        // 0x36b0d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0d4) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B0DCu;
    // 0x36b0dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36b0e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b0e4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36B0E4u;
    SET_GPR_U32(ctx, 31, 0x36B0ECu);
    ctx->pc = 0x36B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0E4u;
    // 0x36b0e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36B0E4u, 0x36B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0ECu;
label_36b0ec:
    // 0x36b0ec: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x36B0ECu;
    {
        const bool branch_taken_0x36b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0ECu;
        // 0x36b0f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0ec) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B0F4u;
    // 0x36b0f4: 0xc10314e  jal         func_40C538
    ctx->pc = 0x36B0F4u;
    SET_GPR_U32(ctx, 31, 0x36B0FCu);
    ctx->pc = 0x36B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0F4u;
    // 0x36b0f8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x36B0F4u, 0x36B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0FCu;
label_36b0fc:
    // 0x36b0fc: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x36B0FCu;
    {
        const bool branch_taken_0x36b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0FCu;
        // 0x36b100: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0fc) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B104u;
    // 0x36b104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b108: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b10c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B10Cu;
    SET_GPR_U32(ctx, 31, 0x36B114u);
    ctx->pc = 0x36B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B10Cu;
    // 0x36b110: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B10Cu, 0x36B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B114u;
label_36b114:
    // 0x36b114: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B114u;
    SET_GPR_U32(ctx, 31, 0x36B11Cu);
    ctx->pc = 0x36B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B114u;
    // 0x36b118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B114u, 0x36B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B11Cu;
label_36b11c:
    // 0x36b11c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b124: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36b124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b128: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B128u;
    SET_GPR_U32(ctx, 31, 0x36B130u);
    ctx->pc = 0x36B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B128u;
    // 0x36b12c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B128u, 0x36B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B130u;
label_36b130:
    // 0x36b130: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B130u;
    SET_GPR_U32(ctx, 31, 0x36B138u);
    ctx->pc = 0x36B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B130u;
    // 0x36b134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B130u, 0x36B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B138u;
label_36b138:
    // 0x36b138: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b13c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36b140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b144: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B144u;
    SET_GPR_U32(ctx, 31, 0x36B14Cu);
    ctx->pc = 0x36B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B144u;
    // 0x36b148: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B144u, 0x36B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B14Cu;
label_36b14c:
    // 0x36b14c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B14Cu;
    SET_GPR_U32(ctx, 31, 0x36B154u);
    ctx->pc = 0x36B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B14Cu;
    // 0x36b150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B14Cu, 0x36B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B154u;
label_36b154:
    // 0x36b154: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36b158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b15c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36b15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b160: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B160u;
    SET_GPR_U32(ctx, 31, 0x36B168u);
    ctx->pc = 0x36B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B160u;
    // 0x36b164: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B160u, 0x36B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B168u;
label_36b168:
    // 0x36b168: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B168u;
    SET_GPR_U32(ctx, 31, 0x36B170u);
    ctx->pc = 0x36B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B168u;
    // 0x36b16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B168u, 0x36B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B170u;
label_36b170:
    // 0x36b170: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36b170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b174: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36b178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b17c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B17Cu;
    SET_GPR_U32(ctx, 31, 0x36B184u);
    ctx->pc = 0x36B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B17Cu;
    // 0x36b180: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B17Cu, 0x36B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B184u;
label_36b184:
    // 0x36b184: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B184u;
    SET_GPR_U32(ctx, 31, 0x36B18Cu);
    ctx->pc = 0x36B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B184u;
    // 0x36b188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B184u, 0x36B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B18Cu;
label_36b18c:
    // 0x36b18c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b190: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36b194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b198: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B198u;
    SET_GPR_U32(ctx, 31, 0x36B1A0u);
    ctx->pc = 0x36B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B198u;
    // 0x36b19c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B198u, 0x36B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1A0u;
label_36b1a0:
    // 0x36b1a0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36B1A0u;
    SET_GPR_U32(ctx, 31, 0x36B1A8u);
    ctx->pc = 0x36B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1A0u;
    // 0x36b1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36B1A0u, 0x36B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1A8u;
label_36b1a8:
    // 0x36b1a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36b1a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36b1ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36b1b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B1B4u;
    SET_GPR_U32(ctx, 31, 0x36B1BCu);
    ctx->pc = 0x36B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1B4u;
    // 0x36b1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B1B4u, 0x36B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1BCu;
label_36b1bc:
    // 0x36b1bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36B1BCu;
    SET_GPR_U32(ctx, 31, 0x36B1C4u);
    ctx->pc = 0x36B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1BCu;
    // 0x36b1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36B1BCu, 0x36B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1C4u;
label_36b1c4:
    // 0x36b1c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36b1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36b1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x36b1d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36b1d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36b1dc: 0xc06394c  jal         func_18E530
    ctx->pc = 0x36B1DCu;
    SET_GPR_U32(ctx, 31, 0x36B1E4u);
    ctx->pc = 0x36B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1DCu;
    // 0x36b1e0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E530u, 0x36B1DCu, 0x36B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1E4u;
label_36b1e4:
    // 0x36b1e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36B1E4u;
    {
        const bool branch_taken_0x36b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1E4u;
        // 0x36b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b1e4) {
            ctx->pc = 0x36B1F4u;
            goto label_36b1f4;
        }
    }
    ctx->pc = 0x36B1ECu;
label_36b1ec:
    // 0x36b1ec: 0xc0dab98  jal         func_36AE60
    ctx->pc = 0x36B1ECu;
    SET_GPR_U32(ctx, 31, 0x36B1F4u);
    ctx->pc = 0x36B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1ECu;
    // 0x36b1f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AE60u, 0x36B1ECu, 0x36B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1F4u;
label_36b1f4:
    // 0x36b1f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x36b1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b1f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x36b1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b1fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x36b1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b200: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36b200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b204: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x36b204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b208: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x36b208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b20c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x36b20cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b214: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x36b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36b218: 0x3e00008  jr          $ra
    ctx->pc = 0x36B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B218u;
        // 0x36b21c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B220u;
}
