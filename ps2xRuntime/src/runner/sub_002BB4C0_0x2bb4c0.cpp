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

// Function: sub_002BB4C0
// Address: 0x2bb4c0 - 0x2bb578
void sub_002BB4C0_0x2bb4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB4C0_0x2bb4c0");
#endif

    switch (ctx->pc) {
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb560u: goto label_2bb560;
        default: break;
    }

    ctx->pc = 0x2bb4c0u;

    // 0x2bb4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb4c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2bb4c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bb4cc: 0x24421098  addiu       $v0, $v0, 0x1098
    ctx->pc = 0x2bb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4248));
    // 0x2bb4d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bb4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bb4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb4dc: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2bb4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x2bb4e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb4e4: 0xac820208  sw          $v0, 0x208($a0)
    ctx->pc = 0x2bb4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 2));
    // 0x2bb4e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb4ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb4f0: 0xa0600120  sb          $zero, 0x120($v1)
    ctx->pc = 0x2bb4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb4f4: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2bb4f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2bb4f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2bb4fc: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2bb4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    // 0x2bb500: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bb500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb504: 0x8065000b  lb          $a1, 0xB($v1)
    ctx->pc = 0x2bb504u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2bb508: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2bb508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb50c: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2bb50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2bb510: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bb510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bb514: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2bb514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2bb518: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x2bb518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bb51c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2BB51Cu;
    SET_GPR_U32(ctx, 31, 0x2BB524u);
    ctx->pc = 0x2BB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB51Cu;
    // 0x2bb520: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2BB51Cu, 0x2BB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB524u;
label_2bb524:
    // 0x2bb524: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2bb524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb52c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2bb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bb530: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x2bb530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bb534: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bb534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2bb538: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB538u;
    SET_GPR_U32(ctx, 31, 0x2BB540u);
    ctx->pc = 0x2BB53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB538u;
    // 0x2bb53c: 0xa203001a  sb          $v1, 0x1A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB538u, 0x2BB540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB540u;
label_2bb540:
    // 0x2bb540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb548: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2BB548u;
    SET_GPR_U32(ctx, 31, 0x2BB550u);
    ctx->pc = 0x2BB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB548u;
    // 0x2bb54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BB548u, 0x2BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB550u;
label_2bb550:
    // 0x2bb550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB550u;
    {
        const bool branch_taken_0x2bb550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB550u;
        // 0x2bb554: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb550) {
            ctx->pc = 0x2BB568u;
            goto label_2bb568;
        }
    }
    ctx->pc = 0x2BB558u;
    // 0x2bb558: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BB558u;
    SET_GPR_U32(ctx, 31, 0x2BB560u);
    ctx->pc = 0x2BB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB558u;
    // 0x2bb55c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BB558u, 0x2BB560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB560u;
label_2bb560:
    // 0x2bb560: 0xa040011f  sb          $zero, 0x11F($v0)
    ctx->pc = 0x2bb560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb564: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bb564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb568:
    // 0x2bb568: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bb568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb56c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb570: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB570u;
        // 0x2bb574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB578u;
}
