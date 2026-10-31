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

// Function: sub_003EE170
// Address: 0x3ee170 - 0x3ee248
void sub_003EE170_0x3ee170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE170_0x3ee170");
#endif

    switch (ctx->pc) {
        case 0x3ee170u: goto label_3ee170;
        case 0x3ee174u: goto label_3ee174;
        case 0x3ee178u: goto label_3ee178;
        case 0x3ee17cu: goto label_3ee17c;
        case 0x3ee180u: goto label_3ee180;
        case 0x3ee184u: goto label_3ee184;
        case 0x3ee188u: goto label_3ee188;
        case 0x3ee18cu: goto label_3ee18c;
        case 0x3ee190u: goto label_3ee190;
        case 0x3ee194u: goto label_3ee194;
        case 0x3ee198u: goto label_3ee198;
        case 0x3ee19cu: goto label_3ee19c;
        case 0x3ee1a0u: goto label_3ee1a0;
        case 0x3ee1a4u: goto label_3ee1a4;
        case 0x3ee1a8u: goto label_3ee1a8;
        case 0x3ee1acu: goto label_3ee1ac;
        case 0x3ee1b0u: goto label_3ee1b0;
        case 0x3ee1b4u: goto label_3ee1b4;
        case 0x3ee1b8u: goto label_3ee1b8;
        case 0x3ee1bcu: goto label_3ee1bc;
        case 0x3ee1c0u: goto label_3ee1c0;
        case 0x3ee1c4u: goto label_3ee1c4;
        case 0x3ee1c8u: goto label_3ee1c8;
        case 0x3ee1ccu: goto label_3ee1cc;
        case 0x3ee1d0u: goto label_3ee1d0;
        case 0x3ee1d4u: goto label_3ee1d4;
        case 0x3ee1d8u: goto label_3ee1d8;
        case 0x3ee1dcu: goto label_3ee1dc;
        case 0x3ee1e0u: goto label_3ee1e0;
        case 0x3ee1e4u: goto label_3ee1e4;
        case 0x3ee1e8u: goto label_3ee1e8;
        case 0x3ee1ecu: goto label_3ee1ec;
        case 0x3ee1f0u: goto label_3ee1f0;
        case 0x3ee1f4u: goto label_3ee1f4;
        case 0x3ee1f8u: goto label_3ee1f8;
        case 0x3ee1fcu: goto label_3ee1fc;
        case 0x3ee200u: goto label_3ee200;
        case 0x3ee204u: goto label_3ee204;
        case 0x3ee208u: goto label_3ee208;
        case 0x3ee20cu: goto label_3ee20c;
        case 0x3ee210u: goto label_3ee210;
        case 0x3ee214u: goto label_3ee214;
        case 0x3ee218u: goto label_3ee218;
        case 0x3ee21cu: goto label_3ee21c;
        case 0x3ee220u: goto label_3ee220;
        case 0x3ee224u: goto label_3ee224;
        case 0x3ee228u: goto label_3ee228;
        case 0x3ee22cu: goto label_3ee22c;
        case 0x3ee230u: goto label_3ee230;
        case 0x3ee234u: goto label_3ee234;
        case 0x3ee238u: goto label_3ee238;
        case 0x3ee23cu: goto label_3ee23c;
        case 0x3ee240u: goto label_3ee240;
        case 0x3ee244u: goto label_3ee244;
        default: break;
    }

    ctx->pc = 0x3ee170u;

label_3ee170:
    // 0x3ee170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ee170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3ee174:
    // 0x3ee174: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ee174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ee178:
    // 0x3ee178: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3ee178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3ee17c:
    // 0x3ee17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee180:
    // 0x3ee180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ee180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ee184:
    // 0x3ee184: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ee184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ee188:
    // 0x3ee188: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ee188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ee18c:
    // 0x3ee18c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ee18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ee190:
    // 0x3ee190: 0x40f809  jalr        $v0
label_3ee194:
    if (ctx->pc == 0x3EE194u) {
        ctx->pc = 0x3EE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE190u;
        // 0x3ee194: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE198u;
        goto label_3ee198;
    }
    ctx->pc = 0x3EE190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE198u);
        ctx->pc = 0x3EE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE190u;
        // 0x3ee194: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE190u, 0x3EE198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE198u;
label_3ee198:
    // 0x3ee198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ee19c:
    // 0x3ee19c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ee1a0:
    // 0x3ee1a0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3ee1a4:
    if (ctx->pc == 0x3EE1A4u) {
        ctx->pc = 0x3EE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1A0u;
        // 0x3ee1a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE1A8u;
        goto label_3ee1a8;
    }
    ctx->pc = 0x3EE1A0u;
    {
        const bool branch_taken_0x3ee1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee1a0) {
            ctx->pc = 0x3EE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE1A0u;
            // 0x3ee1a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE1B0u;
            goto label_3ee1b0;
        }
    }
    ctx->pc = 0x3EE1A8u;
label_3ee1a8:
    // 0x3ee1a8: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ee1ac:
    if (ctx->pc == 0x3EE1ACu) {
        ctx->pc = 0x3EE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1A8u;
        // 0x3ee1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE1B0u;
        goto label_3ee1b0;
    }
    ctx->pc = 0x3EE1A8u;
    {
        const bool branch_taken_0x3ee1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1A8u;
        // 0x3ee1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee1a8) {
            ctx->pc = 0x3EE230u;
            goto label_3ee230;
        }
    }
    ctx->pc = 0x3EE1B0u;
label_3ee1b0:
    // 0x3ee1b0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ee1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ee1b4:
    // 0x3ee1b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ee1b8:
    // 0x3ee1b8: 0x40f809  jalr        $v0
label_3ee1bc:
    if (ctx->pc == 0x3EE1BCu) {
        ctx->pc = 0x3EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1B8u;
        // 0x3ee1bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE1C0u;
        goto label_3ee1c0;
    }
    ctx->pc = 0x3EE1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE1C0u);
        ctx->pc = 0x3EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1B8u;
        // 0x3ee1bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE1B8u, 0x3EE1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE1C0u;
label_3ee1c0:
    // 0x3ee1c0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3ee1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3ee1c4:
    // 0x3ee1c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ee1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ee1c8:
    // 0x3ee1c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3ee1cc:
    if (ctx->pc == 0x3EE1CCu) {
        ctx->pc = 0x3EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1C8u;
        // 0x3ee1cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE1D0u;
        goto label_3ee1d0;
    }
    ctx->pc = 0x3EE1C8u;
    {
        const bool branch_taken_0x3ee1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1C8u;
        // 0x3ee1cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee1c8) {
            ctx->pc = 0x3EE22Cu;
            goto label_3ee22c;
        }
    }
    ctx->pc = 0x3EE1D0u;
label_3ee1d0:
    // 0x3ee1d0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3ee1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ee1d4:
    // 0x3ee1d4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3ee1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3ee1d8:
    // 0x3ee1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ee1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ee1dc:
    // 0x3ee1dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ee1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ee1e0:
    // 0x3ee1e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ee1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ee1e4:
    // 0x3ee1e4: 0xc0e92f4  jal         func_3A4BD0
label_3ee1e8:
    if (ctx->pc == 0x3EE1E8u) {
        ctx->pc = 0x3EE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1E4u;
        // 0x3ee1e8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE1ECu;
        goto label_3ee1ec;
    }
    ctx->pc = 0x3EE1E4u;
    SET_GPR_U32(ctx, 31, 0x3EE1ECu);
    ctx->pc = 0x3EE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE1E4u;
    // 0x3ee1e8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3EE1E4u, 0x3EE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE1ECu;
label_3ee1ec:
    // 0x3ee1ec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ee1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ee1f0:
    // 0x3ee1f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ee1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ee1f4:
    // 0x3ee1f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ee1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ee1f8:
    // 0x3ee1f8: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3ee1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3ee1fc:
    // 0x3ee1fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ee1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ee200:
    // 0x3ee200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ee200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee204:
    // 0x3ee204: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3ee204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3ee208:
    // 0x3ee208: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3ee208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3ee20c:
    // 0x3ee20c: 0x40f809  jalr        $v0
label_3ee210:
    if (ctx->pc == 0x3EE210u) {
        ctx->pc = 0x3EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE20Cu;
        // 0x3ee210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE214u;
        goto label_3ee214;
    }
    ctx->pc = 0x3EE20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE214u);
        ctx->pc = 0x3EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE20Cu;
        // 0x3ee210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE20Cu, 0x3EE214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE214u;
label_3ee214:
    // 0x3ee214: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ee214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ee218:
    // 0x3ee218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ee218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee21c:
    // 0x3ee21c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3ee21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3ee220:
    // 0x3ee220: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3ee224:
    // 0x3ee224: 0x40f809  jalr        $v0
label_3ee228:
    if (ctx->pc == 0x3EE228u) {
        ctx->pc = 0x3EE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE224u;
        // 0x3ee228: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE22Cu;
        goto label_3ee22c;
    }
    ctx->pc = 0x3EE224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE22Cu);
        ctx->pc = 0x3EE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE224u;
        // 0x3ee228: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE224u, 0x3EE22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE22Cu;
label_3ee22c:
    // 0x3ee22c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ee22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee230:
    // 0x3ee230: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ee230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee234:
    // 0x3ee234: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ee234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ee238:
    // 0x3ee238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ee238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee23c:
    // 0x3ee23c: 0x3e00008  jr          $ra
label_3ee240:
    if (ctx->pc == 0x3EE240u) {
        ctx->pc = 0x3EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE23Cu;
        // 0x3ee240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE244u;
        goto label_3ee244;
    }
    ctx->pc = 0x3EE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE23Cu;
        // 0x3ee240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE244u;
label_3ee244:
    // 0x3ee244: 0x0  nop
    ctx->pc = 0x3ee244u;
    // NOP
    ctx->pc = 0x3ee248u;
}
