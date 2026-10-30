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

// Function: sub_0048D580
// Address: 0x48d580 - 0x48d7e8
void sub_0048D580_0x48d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D580_0x48d580");
#endif

    switch (ctx->pc) {
        case 0x48d5a0u: goto label_48d5a0;
        case 0x48d5e8u: goto label_48d5e8;
        case 0x48d6d8u: goto label_48d6d8;
        case 0x48d774u: goto label_48d774;
        case 0x48d79cu: goto label_48d79c;
        case 0x48d7b0u: goto label_48d7b0;
        case 0x48d7c4u: goto label_48d7c4;
        default: break;
    }

    ctx->pc = 0x48d580u;

    // 0x48d580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48d584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48d588: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x48d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x48d58c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48d58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d590: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x48d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x48d594: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48d594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d598: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x48d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x48d59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48d5a0:
    // 0x48d5a0: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
    ctx->pc = 0x48D5A0u;
    {
        const bool branch_taken_0x48d5a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5A0u;
        // 0x48d5a4: 0x8f83898c  lw          $v1, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5a0) {
            ctx->pc = 0x48D6F8u;
            goto label_48d6f8;
        }
    }
    ctx->pc = 0x48D5A8u;
    // 0x48d5a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D5A8u;
    {
        const bool branch_taken_0x48d5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5A8u;
        // 0x48d5ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5a8) {
            ctx->pc = 0x48D5B8u;
            goto label_48d5b8;
        }
    }
    ctx->pc = 0x48D5B0u;
    // 0x48d5b0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d5b4: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x48d5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48d5b8:
    // 0x48d5b8: 0x1120003c  beqz        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x48D5B8u;
    {
        const bool branch_taken_0x48d5b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5B8u;
        // 0x48d5bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5b8) {
            ctx->pc = 0x48D6ACu;
            goto label_48d6ac;
        }
    }
    ctx->pc = 0x48D5C0u;
    // 0x48d5c0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d5c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48d5c8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d5cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D5CCu;
    {
        const bool branch_taken_0x48d5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5CCu;
        // 0x48d5d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5cc) {
            ctx->pc = 0x48D608u;
            goto label_48d608;
        }
    }
    ctx->pc = 0x48D5D4u;
    // 0x48d5d4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d5d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d5dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d5dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d5e0: 0xf  sync
    ctx->pc = 0x48d5e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d5e4: 0x40f  sync.p
    ctx->pc = 0x48d5e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d5e8:
    // 0x48d5e8: 0x0  nop
    ctx->pc = 0x48d5e8u;
    // NOP
    // 0x48d5ec: 0x0  nop
    ctx->pc = 0x48d5ecu;
    // NOP
    // 0x48d5f0: 0x0  nop
    ctx->pc = 0x48d5f0u;
    // NOP
    // 0x48d5f4: 0x0  nop
    ctx->pc = 0x48d5f4u;
    // NOP
    // 0x48d5f8: 0x0  nop
    ctx->pc = 0x48d5f8u;
    // NOP
    // 0x48d5fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D5FCu;
    {
        const bool branch_taken_0x48d5fc = (false);
        if (branch_taken_0x48d5fc) {
            ctx->pc = 0x48D5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d5e8;
        }
    }
    ctx->pc = 0x48D604u;
    // 0x48d604: 0x0  nop
    ctx->pc = 0x48d604u;
    // NOP
label_48d608:
    // 0x48d608: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d60c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d610: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48d614: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48d614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48d618: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48d618u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48d61c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48d61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48d620: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d624: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48d628: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48d628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d62c: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48d630: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48d630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48d634: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48d634u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48d638: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48d638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48d63c: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48d63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d640: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48d640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48d644: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48d644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48d648: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48d648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48d64c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48d64cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48d650: 0xf  sync
    ctx->pc = 0x48d650u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d654: 0x40f  sync.p
    ctx->pc = 0x48d654u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d658: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d65c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D65Cu;
    {
        const bool branch_taken_0x48d65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D65Cu;
        // 0x48d660: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d65c) {
            ctx->pc = 0x48D690u;
            goto label_48d690;
        }
    }
    ctx->pc = 0x48D664u;
    // 0x48d664: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48d668: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48d66c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48d670: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D670u;
    {
        const bool branch_taken_0x48d670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D670u;
        // 0x48d674: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d670) {
            ctx->pc = 0x48D694u;
            goto label_48d694;
        }
    }
    ctx->pc = 0x48D678u;
    // 0x48d678: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48d678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48d67c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48d680: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48d684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48d688: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48d688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48d68c: 0x0  nop
    ctx->pc = 0x48d68cu;
    // NOP
label_48d690:
    // 0x48d690: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48d694:
    // 0x48d694: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d698: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48d69c: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48d6a0: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48d6a4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48d6a8: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48d6ac:
    // 0x48d6ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d6b0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d6b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x48d6b8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d6bc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D6BCu;
    {
        const bool branch_taken_0x48d6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D6BCu;
        // 0x48d6c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d6bc) {
            ctx->pc = 0x48D6F8u;
            goto label_48d6f8;
        }
    }
    ctx->pc = 0x48D6C4u;
    // 0x48d6c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d6c8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d6cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d6ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d6d0: 0xf  sync
    ctx->pc = 0x48d6d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d6d4: 0x40f  sync.p
    ctx->pc = 0x48d6d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d6d8:
    // 0x48d6d8: 0x0  nop
    ctx->pc = 0x48d6d8u;
    // NOP
    // 0x48d6dc: 0x0  nop
    ctx->pc = 0x48d6dcu;
    // NOP
    // 0x48d6e0: 0x0  nop
    ctx->pc = 0x48d6e0u;
    // NOP
    // 0x48d6e4: 0x0  nop
    ctx->pc = 0x48d6e4u;
    // NOP
    // 0x48d6e8: 0x0  nop
    ctx->pc = 0x48d6e8u;
    // NOP
    // 0x48d6ec: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D6ECu;
    {
        const bool branch_taken_0x48d6ec = (false);
        if (branch_taken_0x48d6ec) {
            ctx->pc = 0x48D6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d6d8;
        }
    }
    ctx->pc = 0x48D6F4u;
    // 0x48d6f4: 0x0  nop
    ctx->pc = 0x48d6f4u;
    // NOP
label_48d6f8:
    // 0x48d6f8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x48d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48d6fc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x48d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x48d700: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x48d700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x48d704: 0x8f8589d8  lw          $a1, -0x7628($gp)
    ctx->pc = 0x48d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48d708: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x48d708u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x48d70c: 0x8f8689dc  lw          $a2, -0x7624($gp)
    ctx->pc = 0x48d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x48d710: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x48d710u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x48d714: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48d718: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x48d718u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48d71c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x48d71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x48d720: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x48d720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x48d724: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x48d724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48d728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D728u;
    {
        const bool branch_taken_0x48d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D728u;
        // 0x48d72c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d728) {
            ctx->pc = 0x48D73Cu;
            goto label_48d73c;
        }
    }
    ctx->pc = 0x48D730u;
    // 0x48d730: 0xaf8589d0  sw          $a1, -0x7630($gp)
    ctx->pc = 0x48d730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 5));
    // 0x48d734: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x48D734u;
    {
        const bool branch_taken_0x48d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D734u;
        // 0x48d738: 0xaf8389d8  sw          $v1, -0x7628($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d734) {
            ctx->pc = 0x48D7CCu;
            goto label_48d7cc;
        }
    }
    ctx->pc = 0x48D73Cu;
label_48d73c:
    // 0x48d73c: 0x8f8389ac  lw          $v1, -0x7654($gp)
    ctx->pc = 0x48d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d740: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x48d740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x48d744: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x48d744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x48d748: 0x8f8589c8  lw          $a1, -0x7638($gp)
    ctx->pc = 0x48d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x48d74c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x48d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x48d750: 0x2463009f  addiu       $v1, $v1, 0x9F
    ctx->pc = 0x48d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 159));
    // 0x48d754: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x48d754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48d758: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x48d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x48d75c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48d760: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x48d760u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48d764: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x48D764u;
    {
        const bool branch_taken_0x48d764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D764u;
        // 0x48d768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d764) {
            ctx->pc = 0x48D7CCu;
            goto label_48d7cc;
        }
    }
    ctx->pc = 0x48D76Cu;
    // 0x48d76c: 0xc123024  jal         func_48C090
    ctx->pc = 0x48D76Cu;
    SET_GPR_U32(ctx, 31, 0x48D774u);
    ctx->pc = 0x48D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D76Cu;
    // 0x48d770: 0x8f9189f4  lw          $s1, -0x760C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48D76Cu, 0x48D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D774u;
label_48d774:
    // 0x48d774: 0x938289cc  lbu         $v0, -0x7634($gp)
    ctx->pc = 0x48d774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
    // 0x48d778: 0x278489c0  addiu       $a0, $gp, -0x7640
    ctx->pc = 0x48d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
    // 0x48d77c: 0x8f8589e4  lw          $a1, -0x761C($gp)
    ctx->pc = 0x48d77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48d780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48d780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48d784: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48d788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d78c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D78Cu;
    {
        const bool branch_taken_0x48d78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x48D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D78Cu;
        // 0x48d790: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d78c) {
            ctx->pc = 0x48D7A0u;
            goto label_48d7a0;
        }
    }
    ctx->pc = 0x48D794u;
    // 0x48d794: 0xc123142  jal         func_48C508
    ctx->pc = 0x48D794u;
    SET_GPR_U32(ctx, 31, 0x48D79Cu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48D794u, 0x48D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D79Cu;
label_48d79c:
    // 0x48d79c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x48d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_48d7a0:
    // 0x48d7a0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48D7A0u;
    {
        const bool branch_taken_0x48d7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x48D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7A0u;
        // 0x48d7a4: 0x102902  srl         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7a0) {
            ctx->pc = 0x48D7B8u;
            goto label_48d7b8;
        }
    }
    ctx->pc = 0x48D7A8u;
    // 0x48d7a8: 0xc123298  jal         func_48CA60
    ctx->pc = 0x48D7A8u;
    SET_GPR_U32(ctx, 31, 0x48D7B0u);
    ctx->pc = 0x48D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D7A8u;
    // 0x48d7ac: 0x102102  srl         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x48D7A8u, 0x48D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D7B0u;
label_48d7b0:
    // 0x48d7b0: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x48D7B0u;
    {
        const bool branch_taken_0x48d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d7b0) {
            ctx->pc = 0x48D5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d5a0;
        }
    }
    ctx->pc = 0x48D7B8u;
label_48d7b8:
    // 0x48d7b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48d7bc: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48D7BCu;
    SET_GPR_U32(ctx, 31, 0x48D7C4u);
    ctx->pc = 0x48D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D7BCu;
    // 0x48d7c0: 0x2242024  and         $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48D7BCu, 0x48D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D7C4u;
label_48d7c4:
    // 0x48d7c4: 0x1000ff76  b           . + 4 + (-0x8A << 2)
    ctx->pc = 0x48D7C4u;
    {
        const bool branch_taken_0x48d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d7c4) {
            ctx->pc = 0x48D5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d5a0;
        }
    }
    ctx->pc = 0x48D7CCu;
label_48d7cc:
    // 0x48d7cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48d7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48d7d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x48d7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d7d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d7d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x48d7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x48D7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7E0u;
        // 0x48d7e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D7E8u;
}
