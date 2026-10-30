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

// Function: sub_0047A4D0
// Address: 0x47a4d0 - 0x47a5d0
void sub_0047A4D0_0x47a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A4D0_0x47a4d0");
#endif

    switch (ctx->pc) {
        case 0x47a50cu: goto label_47a50c;
        case 0x47a538u: goto label_47a538;
        case 0x47a548u: goto label_47a548;
        case 0x47a590u: goto label_47a590;
        default: break;
    }

    ctx->pc = 0x47a4d0u;

    // 0x47a4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47a4d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x47a4d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x47a4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47a4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a4e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x47a4e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x47a4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47a4ec: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x47A4ECu;
    {
        const bool branch_taken_0x47a4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A4ECu;
        // 0x47a4f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a4ec) {
            ctx->pc = 0x47A528u;
            goto label_47a528;
        }
    }
    ctx->pc = 0x47A4F4u;
    // 0x47a4f4: 0x1a20002d  blez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x47A4F4u;
    {
        const bool branch_taken_0x47a4f4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x47A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A4F4u;
        // 0x47a4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a4f4) {
            ctx->pc = 0x47A5ACu;
            goto label_47a5ac;
        }
    }
    ctx->pc = 0x47A4FCu;
    // 0x47a4fc: 0x5a40002c  blezl       $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x47A4FCu;
    {
        const bool branch_taken_0x47a4fc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x47a4fc) {
            ctx->pc = 0x47A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A4FCu;
            // 0x47a500: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A5B0u;
            goto label_47a5b0;
        }
    }
    ctx->pc = 0x47A504u;
    // 0x47a504: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A504u;
    SET_GPR_U32(ctx, 31, 0x47A50Cu);
    ctx->pc = 0x47A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A504u;
    // 0x47a508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A504u, 0x47A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A50Cu;
label_47a50c:
    // 0x47a50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a510: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A510u;
    {
        const bool branch_taken_0x47a510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A510u;
        // 0x47a514: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a510) {
            ctx->pc = 0x47A530u;
            goto label_47a530;
        }
    }
    ctx->pc = 0x47A518u;
    // 0x47a518: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x47a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x47a51c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x47a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x47a520: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x47A520u;
    {
        const bool branch_taken_0x47a520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A520u;
        // 0x47a524: 0x2511818  mult        $v1, $s2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a520) {
            ctx->pc = 0x47A598u;
            goto label_47a598;
        }
    }
    ctx->pc = 0x47A528u;
label_47a528:
    // 0x47a528: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x47A528u;
    {
        const bool branch_taken_0x47a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A528u;
        // 0x47a52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a528) {
            ctx->pc = 0x47A5ACu;
            goto label_47a5ac;
        }
    }
    ctx->pc = 0x47A530u;
label_47a530:
    // 0x47a530: 0xc129c4e  jal         func_4A7138
    ctx->pc = 0x47A530u;
    SET_GPR_U32(ctx, 31, 0x47A538u);
    ctx->pc = 0x47A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A530u;
    // 0x47a534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7138u, 0x47A530u, 0x47A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A538u;
label_47a538:
    // 0x47a538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a53c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x47A53Cu;
    {
        const bool branch_taken_0x47a53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A53Cu;
        // 0x47a540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a53c) {
            ctx->pc = 0x47A580u;
            goto label_47a580;
        }
    }
    ctx->pc = 0x47A544u;
    // 0x47a544: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x47a544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47a548:
    // 0x47a548: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47a548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x47a54c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x47a550: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x47a550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x47a554: 0x0  nop
    ctx->pc = 0x47a554u;
    // NOP
    // 0x47a558: 0x0  nop
    ctx->pc = 0x47a558u;
    // NOP
    // 0x47a55c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47A55Cu;
    {
        const bool branch_taken_0x47a55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A55Cu;
        // 0x47a560: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a55c) {
            ctx->pc = 0x47A548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a548;
        }
    }
    ctx->pc = 0x47A564u;
    // 0x47a564: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x47a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x47a568: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47a56c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x47a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x47a570: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47a574: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x47a574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x47a578: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x47a578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x47a57c: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a580:
    // 0x47a580: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x47A580u;
    {
        const bool branch_taken_0x47a580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A580u;
        // 0x47a584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a580) {
            ctx->pc = 0x47A5ACu;
            goto label_47a5ac;
        }
    }
    ctx->pc = 0x47A588u;
    // 0x47a588: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A588u;
    SET_GPR_U32(ctx, 31, 0x47A590u);
    ctx->pc = 0x47A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A588u;
    // 0x47a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A588u, 0x47A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A590u;
label_47a590:
    // 0x47a590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a594: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x47a594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_47a598:
    // 0x47a598: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x47a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47a59c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x47a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x47a5a0: 0xac91003c  sw          $s1, 0x3C($a0)
    ctx->pc = 0x47a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 17));
    // 0x47a5a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47a5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a5a8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x47a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_47a5ac:
    // 0x47a5ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47a5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47a5b0:
    // 0x47a5b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47a5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47a5b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47a5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47a5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47a5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47a5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x47A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A5BCu;
        // 0x47a5c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A5C4u;
    // 0x47a5c4: 0x0  nop
    ctx->pc = 0x47a5c4u;
    // NOP
    // 0x47a5c8: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x47a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x47a5cc: 0x0  nop
    ctx->pc = 0x47a5ccu;
    // NOP
    ctx->pc = 0x47a5d0u;
}
