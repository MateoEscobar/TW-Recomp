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

// Function: sub_0044C208
// Address: 0x44c208 - 0x44c348
void sub_0044C208_0x44c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C208_0x44c208");
#endif

    switch (ctx->pc) {
        case 0x44c258u: goto label_44c258;
        case 0x44c294u: goto label_44c294;
        case 0x44c2b0u: goto label_44c2b0;
        case 0x44c2dcu: goto label_44c2dc;
        default: break;
    }

    ctx->pc = 0x44c208u;

    // 0x44c208: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x44c20c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x44c20cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x44c210: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44c214: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x44c214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x44c218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c21c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44c21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c220: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44c220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44c224: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x44c224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c228: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44c22c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x44c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x44c230: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44c230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44c234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44c238: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44c238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44c23c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x44c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x44c240: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x44c240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x44c244: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x44c244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x44c248: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x44c248u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x44c24c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44c250: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C250u;
    SET_GPR_U32(ctx, 31, 0x44C258u);
    ctx->pc = 0x44C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C250u;
    // 0x44c254: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C250u, 0x44C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C258u;
label_44c258:
    // 0x44c258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44c258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c25c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x44c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x44c260: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x44c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x44c264: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x44c264u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x44c268: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x44c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x44c26c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x44c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x44c270: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x44c270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x44c274: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x44c274u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x44c278: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x44c278u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x44c27c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44C27Cu;
    {
        const bool branch_taken_0x44c27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x44C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C27Cu;
        // 0x44c280: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c27c) {
            ctx->pc = 0x44C294u;
            goto label_44c294;
        }
    }
    ctx->pc = 0x44C284u;
    // 0x44c284: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44c284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44c288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c28c: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44C28Cu;
    SET_GPR_U32(ctx, 31, 0x44C294u);
    ctx->pc = 0x44C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C28Cu;
    // 0x44c290: 0x24a5e380  addiu       $a1, $a1, -0x1C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44C28Cu, 0x44C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C294u;
label_44c294:
    // 0x44c294: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x44c294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x44c298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c29c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x44c2a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x44c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x44c2a4: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x44c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x44c2a8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C2A8u;
    SET_GPR_U32(ctx, 31, 0x44C2B0u);
    ctx->pc = 0x44C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C2A8u;
    // 0x44c2ac: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C2A8u, 0x44C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C2B0u;
label_44c2b0:
    // 0x44c2b0: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x44c2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x44c2b4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x44c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x44c2b8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44C2B8u;
    {
        const bool branch_taken_0x44c2b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x44C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2B8u;
        // 0x44c2bc: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c2b8) {
            ctx->pc = 0x44C2DCu;
            goto label_44c2dc;
        }
    }
    ctx->pc = 0x44C2C0u;
    // 0x44c2c0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44C2C0u;
    {
        const bool branch_taken_0x44c2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x44C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2C0u;
        // 0x44c2c4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c2c0) {
            ctx->pc = 0x44C2DCu;
            goto label_44c2dc;
        }
    }
    ctx->pc = 0x44C2C8u;
    // 0x44c2c8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C2C8u;
    {
        const bool branch_taken_0x44c2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x44C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2C8u;
        // 0x44c2cc: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c2c8) {
            ctx->pc = 0x44C2DCu;
            goto label_44c2dc;
        }
    }
    ctx->pc = 0x44C2D0u;
    // 0x44c2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c2d4: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44C2D4u;
    SET_GPR_U32(ctx, 31, 0x44C2DCu);
    ctx->pc = 0x44C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C2D4u;
    // 0x44c2d8: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44C2D4u, 0x44C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C2DCu;
label_44c2dc:
    // 0x44c2dc: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x44c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x44c2e0: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x44c2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x44c2e4: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x44c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x44c2e8: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x44c2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x44c2ec: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x44c2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x44c2f0: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x44c2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x44c2f4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x44c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x44c2f8: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x44c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x44c2fc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x44c2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x44c300: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x44c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x44c304: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x44c304u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x44c308: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x44c308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x44c30c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x44c30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x44c310: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x44c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x44c314: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x44c314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x44c318: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x44c318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x44c31c: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x44c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x44c320: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x44c320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x44c324: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x44c324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44c328: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44c328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44c32c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44c32cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44c330: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44c330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44c334: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44c334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44c338: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44c338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c340: 0x3e00008  jr          $ra
    ctx->pc = 0x44C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C340u;
        // 0x44c344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C348u;
}
