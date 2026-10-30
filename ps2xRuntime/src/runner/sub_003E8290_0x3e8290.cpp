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

// Function: sub_003E8290
// Address: 0x3e8290 - 0x3e8400
void sub_003E8290_0x3e8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8290_0x3e8290");
#endif

    switch (ctx->pc) {
        case 0x3e8290u: goto label_3e8290;
        case 0x3e8294u: goto label_3e8294;
        case 0x3e8298u: goto label_3e8298;
        case 0x3e829cu: goto label_3e829c;
        case 0x3e82a0u: goto label_3e82a0;
        case 0x3e82a4u: goto label_3e82a4;
        case 0x3e82a8u: goto label_3e82a8;
        case 0x3e82acu: goto label_3e82ac;
        case 0x3e82b0u: goto label_3e82b0;
        case 0x3e82b4u: goto label_3e82b4;
        case 0x3e82b8u: goto label_3e82b8;
        case 0x3e82bcu: goto label_3e82bc;
        case 0x3e82c0u: goto label_3e82c0;
        case 0x3e82c4u: goto label_3e82c4;
        case 0x3e82c8u: goto label_3e82c8;
        case 0x3e82ccu: goto label_3e82cc;
        case 0x3e82d0u: goto label_3e82d0;
        case 0x3e82d4u: goto label_3e82d4;
        case 0x3e82d8u: goto label_3e82d8;
        case 0x3e82dcu: goto label_3e82dc;
        case 0x3e82e0u: goto label_3e82e0;
        case 0x3e82e4u: goto label_3e82e4;
        case 0x3e82e8u: goto label_3e82e8;
        case 0x3e82ecu: goto label_3e82ec;
        case 0x3e82f0u: goto label_3e82f0;
        case 0x3e82f4u: goto label_3e82f4;
        case 0x3e82f8u: goto label_3e82f8;
        case 0x3e82fcu: goto label_3e82fc;
        case 0x3e8300u: goto label_3e8300;
        case 0x3e8304u: goto label_3e8304;
        case 0x3e8308u: goto label_3e8308;
        case 0x3e830cu: goto label_3e830c;
        case 0x3e8310u: goto label_3e8310;
        case 0x3e8314u: goto label_3e8314;
        case 0x3e8318u: goto label_3e8318;
        case 0x3e831cu: goto label_3e831c;
        case 0x3e8320u: goto label_3e8320;
        case 0x3e8324u: goto label_3e8324;
        case 0x3e8328u: goto label_3e8328;
        case 0x3e832cu: goto label_3e832c;
        case 0x3e8330u: goto label_3e8330;
        case 0x3e8334u: goto label_3e8334;
        case 0x3e8338u: goto label_3e8338;
        case 0x3e833cu: goto label_3e833c;
        case 0x3e8340u: goto label_3e8340;
        case 0x3e8344u: goto label_3e8344;
        case 0x3e8348u: goto label_3e8348;
        case 0x3e834cu: goto label_3e834c;
        case 0x3e8350u: goto label_3e8350;
        case 0x3e8354u: goto label_3e8354;
        case 0x3e8358u: goto label_3e8358;
        case 0x3e835cu: goto label_3e835c;
        case 0x3e8360u: goto label_3e8360;
        case 0x3e8364u: goto label_3e8364;
        case 0x3e8368u: goto label_3e8368;
        case 0x3e836cu: goto label_3e836c;
        case 0x3e8370u: goto label_3e8370;
        case 0x3e8374u: goto label_3e8374;
        case 0x3e8378u: goto label_3e8378;
        case 0x3e837cu: goto label_3e837c;
        case 0x3e8380u: goto label_3e8380;
        case 0x3e8384u: goto label_3e8384;
        case 0x3e8388u: goto label_3e8388;
        case 0x3e838cu: goto label_3e838c;
        case 0x3e8390u: goto label_3e8390;
        case 0x3e8394u: goto label_3e8394;
        case 0x3e8398u: goto label_3e8398;
        case 0x3e839cu: goto label_3e839c;
        case 0x3e83a0u: goto label_3e83a0;
        case 0x3e83a4u: goto label_3e83a4;
        case 0x3e83a8u: goto label_3e83a8;
        case 0x3e83acu: goto label_3e83ac;
        case 0x3e83b0u: goto label_3e83b0;
        case 0x3e83b4u: goto label_3e83b4;
        case 0x3e83b8u: goto label_3e83b8;
        case 0x3e83bcu: goto label_3e83bc;
        case 0x3e83c0u: goto label_3e83c0;
        case 0x3e83c4u: goto label_3e83c4;
        case 0x3e83c8u: goto label_3e83c8;
        case 0x3e83ccu: goto label_3e83cc;
        case 0x3e83d0u: goto label_3e83d0;
        case 0x3e83d4u: goto label_3e83d4;
        case 0x3e83d8u: goto label_3e83d8;
        case 0x3e83dcu: goto label_3e83dc;
        case 0x3e83e0u: goto label_3e83e0;
        case 0x3e83e4u: goto label_3e83e4;
        case 0x3e83e8u: goto label_3e83e8;
        case 0x3e83ecu: goto label_3e83ec;
        case 0x3e83f0u: goto label_3e83f0;
        case 0x3e83f4u: goto label_3e83f4;
        case 0x3e83f8u: goto label_3e83f8;
        case 0x3e83fcu: goto label_3e83fc;
        default: break;
    }

    ctx->pc = 0x3e8290u;

label_3e8290:
    // 0x3e8290: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3e8290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3e8294:
    // 0x3e8294: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3e8294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3e8298:
    // 0x3e8298: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3e8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3e829c:
    // 0x3e829c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e829cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e82a0:
    // 0x3e82a0: 0x7fb30450  sq          $s3, 0x450($sp)
    ctx->pc = 0x3e82a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 19));
label_3e82a4:
    // 0x3e82a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e82a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e82a8:
    // 0x3e82a8: 0x7fb40440  sq          $s4, 0x440($sp)
    ctx->pc = 0x3e82a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 20));
label_3e82ac:
    // 0x3e82ac: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3e82acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3e82b0:
    // 0x3e82b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e82b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e82b4:
    // 0x3e82b4: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3e82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3e82b8:
    // 0x3e82b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3e82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e82bc:
    // 0x3e82bc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e82bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e82c0:
    // 0x3e82c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e82c4:
    // 0x3e82c4: 0x40f809  jalr        $v0
label_3e82c8:
    if (ctx->pc == 0x3E82C8u) {
        ctx->pc = 0x3E82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82C4u;
        // 0x3e82c8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E82CCu;
        goto label_3e82cc;
    }
    ctx->pc = 0x3E82C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E82CCu);
        ctx->pc = 0x3E82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82C4u;
        // 0x3e82c8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E82C4u, 0x3E82CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E82CCu;
label_3e82cc:
    // 0x3e82cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e82ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e82d0:
    // 0x3e82d0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3e82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e82d4:
    // 0x3e82d4: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
label_3e82d8:
    if (ctx->pc == 0x3E82D8u) {
        ctx->pc = 0x3E82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82D4u;
        // 0x3e82d8: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E82DCu;
        goto label_3e82dc;
    }
    ctx->pc = 0x3E82D4u;
    {
        const bool branch_taken_0x3e82d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82D4u;
        // 0x3e82d8: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82d4) {
            ctx->pc = 0x3E8390u;
            goto label_3e8390;
        }
    }
    ctx->pc = 0x3E82DCu;
label_3e82dc:
    // 0x3e82dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e82e0:
    if (ctx->pc == 0x3E82E0u) {
        ctx->pc = 0x3E82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82DCu;
        // 0x3e82e0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E82E4u;
        goto label_3e82e4;
    }
    ctx->pc = 0x3E82DCu;
    {
        const bool branch_taken_0x3e82dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82DCu;
        // 0x3e82e0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82dc) {
            ctx->pc = 0x3E82F4u;
            goto label_3e82f4;
        }
    }
    ctx->pc = 0x3E82E4u;
label_3e82e4:
    // 0x3e82e4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3e82e8:
    if (ctx->pc == 0x3E82E8u) {
        ctx->pc = 0x3E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82E4u;
        // 0x3e82e8: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E82ECu;
        goto label_3e82ec;
    }
    ctx->pc = 0x3E82E4u;
    {
        const bool branch_taken_0x3e82e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82E4u;
        // 0x3e82e8: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82e4) {
            ctx->pc = 0x3E8310u;
            goto label_3e8310;
        }
    }
    ctx->pc = 0x3E82ECu;
label_3e82ec:
    // 0x3e82ec: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3e82f0:
    if (ctx->pc == 0x3E82F0u) {
        ctx->pc = 0x3E82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82ECu;
        // 0x3e82f0: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E82F4u;
        goto label_3e82f4;
    }
    ctx->pc = 0x3E82ECu;
    {
        const bool branch_taken_0x3e82ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82ECu;
        // 0x3e82f0: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82ec) {
            ctx->pc = 0x3E83E4u;
            goto label_3e83e4;
        }
    }
    ctx->pc = 0x3E82F4u;
label_3e82f4:
    // 0x3e82f4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3e82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e82f8:
    // 0x3e82f8: 0x16020039  bne         $s0, $v0, . + 4 + (0x39 << 2)
label_3e82fc:
    if (ctx->pc == 0x3E82FCu) {
        ctx->pc = 0x3E82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82F8u;
        // 0x3e82fc: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8300u;
        goto label_3e8300;
    }
    ctx->pc = 0x3E82F8u;
    {
        const bool branch_taken_0x3e82f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82F8u;
        // 0x3e82fc: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82f8) {
            ctx->pc = 0x3E83E0u;
            goto label_3e83e0;
        }
    }
    ctx->pc = 0x3E8300u;
label_3e8300:
    // 0x3e8300: 0xc0ea146  jal         func_3A8518
label_3e8304:
    if (ctx->pc == 0x3E8304u) {
        ctx->pc = 0x3E8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8300u;
        // 0x3e8304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8308u;
        goto label_3e8308;
    }
    ctx->pc = 0x3E8300u;
    SET_GPR_U32(ctx, 31, 0x3E8308u);
    ctx->pc = 0x3E8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8300u;
    // 0x3e8304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E8300u, 0x3E8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8308u;
label_3e8308:
    // 0x3e8308: 0x10000034  b           . + 4 + (0x34 << 2)
label_3e830c:
    if (ctx->pc == 0x3E830Cu) {
        ctx->pc = 0x3E830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8308u;
        // 0x3e830c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8310u;
        goto label_3e8310;
    }
    ctx->pc = 0x3E8308u;
    {
        const bool branch_taken_0x3e8308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8308u;
        // 0x3e830c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8308) {
            ctx->pc = 0x3E83DCu;
            goto label_3e83dc;
        }
    }
    ctx->pc = 0x3E8310u;
label_3e8310:
    // 0x3e8310: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e8310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8314:
    // 0x3e8314: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_3e8318:
    if (ctx->pc == 0x3E8318u) {
        ctx->pc = 0x3E8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8314u;
        // 0x3e8318: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E831Cu;
        goto label_3e831c;
    }
    ctx->pc = 0x3E8314u;
    {
        const bool branch_taken_0x3e8314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8314u;
        // 0x3e8318: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8314) {
            ctx->pc = 0x3E83E4u;
            goto label_3e83e4;
        }
    }
    ctx->pc = 0x3E831Cu;
label_3e831c:
    // 0x3e831c: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x3e831cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3e8320:
    // 0x3e8320: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3e8320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e8324:
    // 0x3e8324: 0x27b20420  addiu       $s2, $sp, 0x420
    ctx->pc = 0x3e8324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e8328:
    // 0x3e8328: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e8328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e832c:
    // 0x3e832c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e8330:
    // 0x3e8330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8334:
    // 0x3e8334: 0x261058b8  addiu       $s0, $s0, 0x58B8
    ctx->pc = 0x3e8334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22712));
label_3e8338:
    // 0x3e8338: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e8338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e833c:
    // 0x3e833c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3e833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3e8340:
    // 0x3e8340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e8340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8344:
    // 0x3e8344: 0xc0e9f84  jal         func_3A7E10
label_3e8348:
    if (ctx->pc == 0x3E8348u) {
        ctx->pc = 0x3E8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8344u;
        // 0x3e8348: 0xafa20420  sw          $v0, 0x420($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E834Cu;
        goto label_3e834c;
    }
    ctx->pc = 0x3E8344u;
    SET_GPR_U32(ctx, 31, 0x3E834Cu);
    ctx->pc = 0x3E8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8344u;
    // 0x3e8348: 0xafa20420  sw          $v0, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3E8344u, 0x3E834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E834Cu;
label_3e834c:
    // 0x3e834c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8350:
    // 0x3e8350: 0xc0f15bc  jal         func_3C56F0
label_3e8354:
    if (ctx->pc == 0x3E8354u) {
        ctx->pc = 0x3E8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8350u;
        // 0x3e8354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8358u;
        goto label_3e8358;
    }
    ctx->pc = 0x3E8350u;
    SET_GPR_U32(ctx, 31, 0x3E8358u);
    ctx->pc = 0x3E8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8350u;
    // 0x3e8354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E8350u, 0x3E8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8358u;
label_3e8358:
    // 0x3e8358: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3e8358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3e835c:
    // 0x3e835c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8360:
    // 0x3e8360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e8360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8364:
    // 0x3e8364: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e8364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e8368:
    // 0x3e8368: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x3e8368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3e836c:
    // 0x3e836c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e8370:
    // 0x3e8370: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3e8370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3e8374:
    // 0x3e8374: 0xc0e9f84  jal         func_3A7E10
label_3e8378:
    if (ctx->pc == 0x3E8378u) {
        ctx->pc = 0x3E8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8374u;
        // 0x3e8378: 0xafa30420  sw          $v1, 0x420($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E837Cu;
        goto label_3e837c;
    }
    ctx->pc = 0x3E8374u;
    SET_GPR_U32(ctx, 31, 0x3E837Cu);
    ctx->pc = 0x3E8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8374u;
    // 0x3e8378: 0xafa30420  sw          $v1, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3E8374u, 0x3E837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E837Cu;
label_3e837c:
    // 0x3e837c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8380:
    // 0x3e8380: 0xc0f15bc  jal         func_3C56F0
label_3e8384:
    if (ctx->pc == 0x3E8384u) {
        ctx->pc = 0x3E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8380u;
        // 0x3e8384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8388u;
        goto label_3e8388;
    }
    ctx->pc = 0x3E8380u;
    SET_GPR_U32(ctx, 31, 0x3E8388u);
    ctx->pc = 0x3E8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8380u;
    // 0x3e8384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E8380u, 0x3E8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8388u;
label_3e8388:
    // 0x3e8388: 0x10000014  b           . + 4 + (0x14 << 2)
label_3e838c:
    if (ctx->pc == 0x3E838Cu) {
        ctx->pc = 0x3E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8388u;
        // 0x3e838c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8390u;
        goto label_3e8390;
    }
    ctx->pc = 0x3E8388u;
    {
        const bool branch_taken_0x3e8388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8388u;
        // 0x3e838c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8388) {
            ctx->pc = 0x3E83DCu;
            goto label_3e83dc;
        }
    }
    ctx->pc = 0x3E8390u;
label_3e8390:
    // 0x3e8390: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3e8390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8394:
    // 0x3e8394: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
label_3e8398:
    if (ctx->pc == 0x3E8398u) {
        ctx->pc = 0x3E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8394u;
        // 0x3e8398: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E839Cu;
        goto label_3e839c;
    }
    ctx->pc = 0x3E8394u;
    {
        const bool branch_taken_0x3e8394 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8394u;
        // 0x3e8398: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8394) {
            ctx->pc = 0x3E83D4u;
            goto label_3e83d4;
        }
    }
    ctx->pc = 0x3E839Cu;
label_3e839c:
    // 0x3e839c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3e839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e83a0:
    // 0x3e83a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e83a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e83a4:
    // 0x3e83a4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3e83a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3e83a8:
    // 0x3e83a8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3e83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3e83ac:
    // 0x3e83ac: 0x40f809  jalr        $v0
label_3e83b0:
    if (ctx->pc == 0x3E83B0u) {
        ctx->pc = 0x3E83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83ACu;
        // 0x3e83b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E83B4u;
        goto label_3e83b4;
    }
    ctx->pc = 0x3E83ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E83B4u);
        ctx->pc = 0x3E83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83ACu;
        // 0x3e83b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E83ACu, 0x3E83B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E83B4u;
label_3e83b4:
    // 0x3e83b4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x3e83b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3e83b8:
    // 0x3e83b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e83b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e83bc:
    // 0x3e83bc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3e83bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e83c0:
    // 0x3e83c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e83c4:
    // 0x3e83c4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e83c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e83c8:
    // 0x3e83c8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e83cc:
    // 0x3e83cc: 0x60f809  jalr        $v1
label_3e83d0:
    if (ctx->pc == 0x3E83D0u) {
        ctx->pc = 0x3E83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83CCu;
        // 0x3e83d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E83D4u;
        goto label_3e83d4;
    }
    ctx->pc = 0x3E83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E83D4u);
        ctx->pc = 0x3E83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83CCu;
        // 0x3e83d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E83CCu, 0x3E83D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E83D4u;
label_3e83d4:
    // 0x3e83d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3e83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3e83d8:
    // 0x3e83d8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3e83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3e83dc:
    // 0x3e83dc: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3e83dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e83e0:
    // 0x3e83e0: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3e83e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e83e4:
    // 0x3e83e4: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3e83e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e83e8:
    // 0x3e83e8: 0x7bb30450  lq          $s3, 0x450($sp)
    ctx->pc = 0x3e83e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e83ec:
    // 0x3e83ec: 0x7bb40440  lq          $s4, 0x440($sp)
    ctx->pc = 0x3e83ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e83f0:
    // 0x3e83f0: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3e83f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e83f4:
    // 0x3e83f4: 0x3e00008  jr          $ra
label_3e83f8:
    if (ctx->pc == 0x3E83F8u) {
        ctx->pc = 0x3E83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83F4u;
        // 0x3e83f8: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E83FCu;
        goto label_3e83fc;
    }
    ctx->pc = 0x3E83F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83F4u;
        // 0x3e83f8: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E83F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E83FCu;
label_3e83fc:
    // 0x3e83fc: 0x0  nop
    ctx->pc = 0x3e83fcu;
    // NOP
    ctx->pc = 0x3e8400u;
}
