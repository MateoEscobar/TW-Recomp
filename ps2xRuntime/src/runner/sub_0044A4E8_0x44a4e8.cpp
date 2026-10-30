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

// Function: sub_0044A4E8
// Address: 0x44a4e8 - 0x44a5d0
void sub_0044A4E8_0x44a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A4E8_0x44a4e8");
#endif

    switch (ctx->pc) {
        case 0x44a504u: goto label_44a504;
        case 0x44a53cu: goto label_44a53c;
        case 0x44a5acu: goto label_44a5ac;
        default: break;
    }

    ctx->pc = 0x44a4e8u;

    // 0x44a4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44a4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a4f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44a4fc: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x44A4FCu;
    SET_GPR_U32(ctx, 31, 0x44A504u);
    ctx->pc = 0x44A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A4FCu;
    // 0x44a500: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x44A4FCu, 0x44A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A504u;
label_44a504:
    // 0x44a504: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x44a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x44a508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A508u;
    {
        const bool branch_taken_0x44a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A508u;
        // 0x44a50c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a508) {
            ctx->pc = 0x44A520u;
            goto label_44a520;
        }
    }
    ctx->pc = 0x44A510u;
    // 0x44a510: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x44a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x44a514: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x44a514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x44a518: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x44A518u;
    {
        const bool branch_taken_0x44a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A518u;
        // 0x44a51c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a518) {
            ctx->pc = 0x44A548u;
            goto label_44a548;
        }
    }
    ctx->pc = 0x44A520u;
label_44a520:
    // 0x44a520: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x44a520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x44a524: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44a528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a52c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44a52cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44a530: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x44a530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x44a534: 0xc1128da  jal         func_44A368
    ctx->pc = 0x44A534u;
    SET_GPR_U32(ctx, 31, 0x44A53Cu);
    ctx->pc = 0x44A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A534u;
    // 0x44a538: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x44A534u, 0x44A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A53Cu;
label_44a53c:
    // 0x44a53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44a540: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44a540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44a544: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x44a544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_44a548:
    // 0x44a548: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44a54c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x44a54cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x44a550: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44a554: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x44a554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x44a558: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x44a558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x44a55c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x44a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x44a560: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x44a560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x44a564: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x44a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x44a568: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x44a568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x44a56c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x44a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x44a570: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x44a570u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x44a574: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x44a574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x44a578: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x44a578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x44a57c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A57Cu;
    {
        const bool branch_taken_0x44a57c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x44A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A57Cu;
        // 0x44a580: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a57c) {
            ctx->pc = 0x44A598u;
            goto label_44a598;
        }
    }
    ctx->pc = 0x44A584u;
    // 0x44a584: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x44a584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x44a588: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A588u;
    {
        const bool branch_taken_0x44a588 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x44a588) {
            ctx->pc = 0x44A58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A588u;
            // 0x44a58c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A5A4u;
            goto label_44a5a4;
        }
    }
    ctx->pc = 0x44A590u;
    // 0x44a590: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44A590u;
    {
        const bool branch_taken_0x44a590 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x44A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A590u;
        // 0x44a594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a590) {
            ctx->pc = 0x44A5A0u;
            goto label_44a5a0;
        }
    }
    ctx->pc = 0x44A598u;
label_44a598:
    // 0x44a598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44A598u;
    {
        const bool branch_taken_0x44a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A598u;
        // 0x44a59c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a598) {
            ctx->pc = 0x44A5A4u;
            goto label_44a5a4;
        }
    }
    ctx->pc = 0x44A5A0u;
label_44a5a0:
    // 0x44a5a0: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x44a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_44a5a4:
    // 0x44a5a4: 0xc1128da  jal         func_44A368
    ctx->pc = 0x44A5A4u;
    SET_GPR_U32(ctx, 31, 0x44A5ACu);
    ctx->pc = 0x44A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A5A4u;
    // 0x44a5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x44A5A4u, 0x44A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A5ACu;
label_44a5ac:
    // 0x44a5ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44a5b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44a5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44a5b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44a5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a5b8: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x44a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x44a5bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44a5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x44A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5C8u;
        // 0x44a5cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A5D0u;
}
