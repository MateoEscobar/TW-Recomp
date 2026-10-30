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

// Function: sub_0044A5D0
// Address: 0x44a5d0 - 0x44a6f8
void sub_0044A5D0_0x44a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A5D0_0x44a5d0");
#endif

    switch (ctx->pc) {
        case 0x44a608u: goto label_44a608;
        case 0x44a628u: goto label_44a628;
        case 0x44a660u: goto label_44a660;
        case 0x44a67cu: goto label_44a67c;
        case 0x44a6ccu: goto label_44a6cc;
        default: break;
    }

    ctx->pc = 0x44a5d0u;

    // 0x44a5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44a5d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a5dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44a5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a5e4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x44a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x44a5e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A5E8u;
    {
        const bool branch_taken_0x44a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5E8u;
        // 0x44a5ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5e8) {
            ctx->pc = 0x44A600u;
            goto label_44a600;
        }
    }
    ctx->pc = 0x44A5F0u;
    // 0x44a5f0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x44a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x44a5f4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x44a5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x44a5f8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x44A5F8u;
    {
        const bool branch_taken_0x44a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a5f8) {
            ctx->pc = 0x44A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A5F8u;
            // 0x44a5fc: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A640u;
            goto label_44a640;
        }
    }
    ctx->pc = 0x44A600u;
label_44a600:
    // 0x44a600: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x44A600u;
    SET_GPR_U32(ctx, 31, 0x44A608u);
    ctx->pc = 0x44A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A600u;
    // 0x44a604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x44A600u, 0x44A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A608u;
label_44a608:
    // 0x44a608: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a60c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x44a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x44a610: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44a614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44a618u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44a61c: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x44a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x44a620: 0xc1128da  jal         func_44A368
    ctx->pc = 0x44A620u;
    SET_GPR_U32(ctx, 31, 0x44A628u);
    ctx->pc = 0x44A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A620u;
    // 0x44a624: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x44A620u, 0x44A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A628u;
label_44a628:
    // 0x44a628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44a62c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44a62cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44a630: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x44a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44a634: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x44a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x44a638: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x44a638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x44a63c: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x44a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_44a640:
    // 0x44a640: 0x111023  negu        $v0, $s1
    ctx->pc = 0x44a640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x44a644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44a644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a648: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a64c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x44a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x44a650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a654: 0x3e00008  jr          $ra
    ctx->pc = 0x44A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A654u;
        // 0x44a658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A65Cu;
    // 0x44a65c: 0x0  nop
    ctx->pc = 0x44a65cu;
    // NOP
label_44a660:
    // 0x44a660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44a664: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44a66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44a674: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x44A674u;
    SET_GPR_U32(ctx, 31, 0x44A67Cu);
    ctx->pc = 0x44A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A674u;
    // 0x44a678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x44A674u, 0x44A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A67Cu;
label_44a67c:
    // 0x44a67c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x44a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x44a680: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a684: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x44a684u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x44a688: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44a688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44a68c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x44a68cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x44a690: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x44a690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x44a694: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x44a694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x44a698: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x44a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x44a69c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A69Cu;
    {
        const bool branch_taken_0x44a69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x44A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A69Cu;
        // 0x44a6a0: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a69c) {
            ctx->pc = 0x44A6B8u;
            goto label_44a6b8;
        }
    }
    ctx->pc = 0x44A6A4u;
    // 0x44a6a4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x44a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x44a6a8: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A6A8u;
    {
        const bool branch_taken_0x44a6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x44a6a8) {
            ctx->pc = 0x44A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A6A8u;
            // 0x44a6ac: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A6C4u;
            goto label_44a6c4;
        }
    }
    ctx->pc = 0x44A6B0u;
    // 0x44a6b0: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44A6B0u;
    {
        const bool branch_taken_0x44a6b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x44A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A6B0u;
        // 0x44a6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a6b0) {
            ctx->pc = 0x44A6C0u;
            goto label_44a6c0;
        }
    }
    ctx->pc = 0x44A6B8u;
label_44a6b8:
    // 0x44a6b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44A6B8u;
    {
        const bool branch_taken_0x44a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A6B8u;
        // 0x44a6bc: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a6b8) {
            ctx->pc = 0x44A6C4u;
            goto label_44a6c4;
        }
    }
    ctx->pc = 0x44A6C0u;
label_44a6c0:
    // 0x44a6c0: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x44a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_44a6c4:
    // 0x44a6c4: 0xc1128da  jal         func_44A368
    ctx->pc = 0x44A6C4u;
    SET_GPR_U32(ctx, 31, 0x44A6CCu);
    ctx->pc = 0x44A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A6C4u;
    // 0x44a6c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x44A6C4u, 0x44A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A6CCu;
label_44a6cc:
    // 0x44a6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44a6d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44a6d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44a6d4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x44a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44a6d8: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x44a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x44a6dc: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x44a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x44a6e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44a6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a6e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x44A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A6ECu;
        // 0x44a6f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A6F4u;
    // 0x44a6f4: 0x0  nop
    ctx->pc = 0x44a6f4u;
    // NOP
    ctx->pc = 0x44a6f8u;
}
