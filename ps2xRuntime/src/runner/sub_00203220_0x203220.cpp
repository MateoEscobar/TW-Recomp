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

// Function: sub_00203220
// Address: 0x203220 - 0x203300
void sub_00203220_0x203220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203220_0x203220");
#endif

    switch (ctx->pc) {
        case 0x203220u: goto label_203220;
        case 0x203224u: goto label_203224;
        case 0x203228u: goto label_203228;
        case 0x20322cu: goto label_20322c;
        case 0x203230u: goto label_203230;
        case 0x203234u: goto label_203234;
        case 0x203238u: goto label_203238;
        case 0x20323cu: goto label_20323c;
        case 0x203240u: goto label_203240;
        case 0x203244u: goto label_203244;
        case 0x203248u: goto label_203248;
        case 0x20324cu: goto label_20324c;
        case 0x203250u: goto label_203250;
        case 0x203254u: goto label_203254;
        case 0x203258u: goto label_203258;
        case 0x20325cu: goto label_20325c;
        case 0x203260u: goto label_203260;
        case 0x203264u: goto label_203264;
        case 0x203268u: goto label_203268;
        case 0x20326cu: goto label_20326c;
        case 0x203270u: goto label_203270;
        case 0x203274u: goto label_203274;
        case 0x203278u: goto label_203278;
        case 0x20327cu: goto label_20327c;
        case 0x203280u: goto label_203280;
        case 0x203284u: goto label_203284;
        case 0x203288u: goto label_203288;
        case 0x20328cu: goto label_20328c;
        case 0x203290u: goto label_203290;
        case 0x203294u: goto label_203294;
        case 0x203298u: goto label_203298;
        case 0x20329cu: goto label_20329c;
        case 0x2032a0u: goto label_2032a0;
        case 0x2032a4u: goto label_2032a4;
        case 0x2032a8u: goto label_2032a8;
        case 0x2032acu: goto label_2032ac;
        case 0x2032b0u: goto label_2032b0;
        case 0x2032b4u: goto label_2032b4;
        case 0x2032b8u: goto label_2032b8;
        case 0x2032bcu: goto label_2032bc;
        case 0x2032c0u: goto label_2032c0;
        case 0x2032c4u: goto label_2032c4;
        case 0x2032c8u: goto label_2032c8;
        case 0x2032ccu: goto label_2032cc;
        case 0x2032d0u: goto label_2032d0;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032d8u: goto label_2032d8;
        case 0x2032dcu: goto label_2032dc;
        case 0x2032e0u: goto label_2032e0;
        case 0x2032e4u: goto label_2032e4;
        case 0x2032e8u: goto label_2032e8;
        case 0x2032ecu: goto label_2032ec;
        case 0x2032f0u: goto label_2032f0;
        case 0x2032f4u: goto label_2032f4;
        case 0x2032f8u: goto label_2032f8;
        case 0x2032fcu: goto label_2032fc;
        default: break;
    }

    ctx->pc = 0x203220u;

label_203220:
    // 0x203220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_203224:
    // 0x203224: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_203228:
    // 0x203228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x203228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20322c:
    // 0x20322c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20322cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_203230:
    // 0x203230: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x203230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_203234:
    // 0x203234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203238:
    // 0x203238: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x203238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20323c:
    // 0x20323c: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
label_203240:
    // 0x203240: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x203240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_203244:
    // 0x203244: 0x2463d9e8  addiu       $v1, $v1, -0x2618
    ctx->pc = 0x203244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957544));
label_203248:
    // 0x203248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20324c:
    // 0x20324c: 0x24c6da18  addiu       $a2, $a2, -0x25E8
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957592));
label_203250:
    // 0x203250: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x203250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_203254:
    // 0x203254: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203258:
    // 0x203258: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x203258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20325c:
    // 0x20325c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20325cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_203260:
    // 0x203260: 0xc080db6  jal         func_2036D8
label_203264:
    if (ctx->pc == 0x203264u) {
        ctx->pc = 0x203264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203260u;
        // 0x203264: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203268u;
        goto label_203268;
    }
    ctx->pc = 0x203260u;
    SET_GPR_U32(ctx, 31, 0x203268u);
    ctx->pc = 0x203264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203260u;
    // 0x203264: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2036D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2036D8u, 0x203260u, 0x203268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203268u;
label_203268:
    // 0x203268: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x203268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20326c:
    // 0x20326c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_203270:
    // 0x203270: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x203270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_203274:
    // 0x203274: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_203278:
    // 0x203278: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20327c:
    if (ctx->pc == 0x20327Cu) {
        ctx->pc = 0x20327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203278u;
        // 0x20327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203280u;
        goto label_203280;
    }
    ctx->pc = 0x203278u;
    {
        const bool branch_taken_0x203278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203278u;
        // 0x20327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203278) {
            ctx->pc = 0x2032A8u;
            goto label_2032a8;
        }
    }
    ctx->pc = 0x203280u;
label_203280:
    // 0x203280: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_203284:
    // 0x203284: 0xc1376d6  jal         func_4DDB58
label_203288:
    if (ctx->pc == 0x203288u) {
        ctx->pc = 0x203288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203284u;
        // 0x203288: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20328Cu;
        goto label_20328c;
    }
    ctx->pc = 0x203284u;
    SET_GPR_U32(ctx, 31, 0x20328Cu);
    ctx->pc = 0x203288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203284u;
    // 0x203288: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x203284u, 0x20328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20328Cu;
label_20328c:
    // 0x20328c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_203290:
    // 0x203290: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x203290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_203294:
    // 0x203294: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_203298:
    // 0x203298: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x203298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20329c:
    // 0x20329c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2032a0:
    // 0x2032a0: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x2032a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_2032a4:
    // 0x2032a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2032a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2032a8:
    // 0x2032a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2032ac:
    // 0x2032ac: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2032b0:
    if (ctx->pc == 0x2032B0u) {
        ctx->pc = 0x2032B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032ACu;
        // 0x2032b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032B4u;
        goto label_2032b4;
    }
    ctx->pc = 0x2032ACu;
    {
        const bool branch_taken_0x2032ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032ACu;
        // 0x2032b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032ac) {
            ctx->pc = 0x2032D8u;
            goto label_2032d8;
        }
    }
    ctx->pc = 0x2032B4u;
label_2032b4:
    // 0x2032b4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2032b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2032b8:
    // 0x2032b8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_2032bc:
    // 0x2032bc: 0x24c68440  addiu       $a2, $a2, -0x7BC0
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935616));
label_2032c0:
    // 0x2032c0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2032c4:
    // 0x2032c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2032c8:
    // 0x2032c8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2032cc:
    // 0x2032cc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2032d0:
    // 0x2032d0: 0x60f809  jalr        $v1
label_2032d4:
    if (ctx->pc == 0x2032D4u) {
        ctx->pc = 0x2032D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D0u;
        // 0x2032d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032D8u;
        goto label_2032d8;
    }
    ctx->pc = 0x2032D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2032D8u);
        ctx->pc = 0x2032D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D0u;
        // 0x2032d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032D0u, 0x2032D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2032D8u;
label_2032d8:
    // 0x2032d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2032d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2032dc:
    // 0x2032dc: 0xc06a39e  jal         func_1A8E78
label_2032e0:
    if (ctx->pc == 0x2032E0u) {
        ctx->pc = 0x2032E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032DCu;
        // 0x2032e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032E4u;
        goto label_2032e4;
    }
    ctx->pc = 0x2032DCu;
    SET_GPR_U32(ctx, 31, 0x2032E4u);
    ctx->pc = 0x2032E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032DCu;
    // 0x2032e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2032DCu, 0x2032E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032E4u;
label_2032e4:
    // 0x2032e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2032e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2032e8:
    // 0x2032e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2032e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2032ec:
    // 0x2032ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2032ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2032f0:
    // 0x2032f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2032f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2032f4:
    // 0x2032f4: 0x3e00008  jr          $ra
label_2032f8:
    if (ctx->pc == 0x2032F8u) {
        ctx->pc = 0x2032F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F4u;
        // 0x2032f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2032FCu;
        goto label_2032fc;
    }
    ctx->pc = 0x2032F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2032F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F4u;
        // 0x2032f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2032FCu;
label_2032fc:
    // 0x2032fc: 0x0  nop
    ctx->pc = 0x2032fcu;
    // NOP
    ctx->pc = 0x203300u;
}
