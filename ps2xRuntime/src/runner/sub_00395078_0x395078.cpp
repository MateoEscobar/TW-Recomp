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

// Function: sub_00395078
// Address: 0x395078 - 0x395148
void sub_00395078_0x395078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395078_0x395078");
#endif

    switch (ctx->pc) {
        case 0x395078u: goto label_395078;
        case 0x39507cu: goto label_39507c;
        case 0x395080u: goto label_395080;
        case 0x395084u: goto label_395084;
        case 0x395088u: goto label_395088;
        case 0x39508cu: goto label_39508c;
        case 0x395090u: goto label_395090;
        case 0x395094u: goto label_395094;
        case 0x395098u: goto label_395098;
        case 0x39509cu: goto label_39509c;
        case 0x3950a0u: goto label_3950a0;
        case 0x3950a4u: goto label_3950a4;
        case 0x3950a8u: goto label_3950a8;
        case 0x3950acu: goto label_3950ac;
        case 0x3950b0u: goto label_3950b0;
        case 0x3950b4u: goto label_3950b4;
        case 0x3950b8u: goto label_3950b8;
        case 0x3950bcu: goto label_3950bc;
        case 0x3950c0u: goto label_3950c0;
        case 0x3950c4u: goto label_3950c4;
        case 0x3950c8u: goto label_3950c8;
        case 0x3950ccu: goto label_3950cc;
        case 0x3950d0u: goto label_3950d0;
        case 0x3950d4u: goto label_3950d4;
        case 0x3950d8u: goto label_3950d8;
        case 0x3950dcu: goto label_3950dc;
        case 0x3950e0u: goto label_3950e0;
        case 0x3950e4u: goto label_3950e4;
        case 0x3950e8u: goto label_3950e8;
        case 0x3950ecu: goto label_3950ec;
        case 0x3950f0u: goto label_3950f0;
        case 0x3950f4u: goto label_3950f4;
        case 0x3950f8u: goto label_3950f8;
        case 0x3950fcu: goto label_3950fc;
        case 0x395100u: goto label_395100;
        case 0x395104u: goto label_395104;
        case 0x395108u: goto label_395108;
        case 0x39510cu: goto label_39510c;
        case 0x395110u: goto label_395110;
        case 0x395114u: goto label_395114;
        case 0x395118u: goto label_395118;
        case 0x39511cu: goto label_39511c;
        case 0x395120u: goto label_395120;
        case 0x395124u: goto label_395124;
        case 0x395128u: goto label_395128;
        case 0x39512cu: goto label_39512c;
        case 0x395130u: goto label_395130;
        case 0x395134u: goto label_395134;
        case 0x395138u: goto label_395138;
        case 0x39513cu: goto label_39513c;
        case 0x395140u: goto label_395140;
        case 0x395144u: goto label_395144;
        default: break;
    }

    ctx->pc = 0x395078u;

label_395078:
    // 0x395078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x395078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39507c:
    // 0x39507c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_395080:
    // 0x395080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395084:
    // 0x395084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x395084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_395088:
    // 0x395088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39508c:
    // 0x39508c: 0xc0e53c8  jal         func_394F20
label_395090:
    if (ctx->pc == 0x395090u) {
        ctx->pc = 0x395090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39508Cu;
        // 0x395090: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395094u;
        goto label_395094;
    }
    ctx->pc = 0x39508Cu;
    SET_GPR_U32(ctx, 31, 0x395094u);
    ctx->pc = 0x395090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39508Cu;
    // 0x395090: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x39508Cu, 0x395094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395094u;
label_395094:
    // 0x395094: 0x10510026  beq         $v0, $s1, . + 4 + (0x26 << 2)
label_395098:
    if (ctx->pc == 0x395098u) {
        ctx->pc = 0x395098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395094u;
        // 0x395098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39509Cu;
        goto label_39509c;
    }
    ctx->pc = 0x395094u;
    {
        const bool branch_taken_0x395094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x395098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395094u;
        // 0x395098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395094) {
            ctx->pc = 0x395130u;
            goto label_395130;
        }
    }
    ctx->pc = 0x39509Cu;
label_39509c:
    // 0x39509c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3950a0:
    // 0x3950a0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x3950a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_3950a4:
    // 0x3950a4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3950a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3950a8:
    // 0x3950a8: 0x40f809  jalr        $v0
label_3950ac:
    if (ctx->pc == 0x3950ACu) {
        ctx->pc = 0x3950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950A8u;
        // 0x3950ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950B0u;
        goto label_3950b0;
    }
    ctx->pc = 0x3950A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3950B0u);
        ctx->pc = 0x3950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950A8u;
        // 0x3950ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3950A8u, 0x3950B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3950B0u;
label_3950b0:
    // 0x3950b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3950b4:
    if (ctx->pc == 0x3950B4u) {
        ctx->pc = 0x3950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950B0u;
        // 0x3950b4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950B8u;
        goto label_3950b8;
    }
    ctx->pc = 0x3950B0u;
    {
        const bool branch_taken_0x3950b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3950b0) {
            ctx->pc = 0x3950B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950B0u;
            // 0x3950b4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950CCu;
            goto label_3950cc;
        }
    }
    ctx->pc = 0x3950B8u;
label_3950b8:
    // 0x3950b8: 0xc0e12f4  jal         func_384BD0
label_3950bc:
    if (ctx->pc == 0x3950BCu) {
        ctx->pc = 0x3950BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950B8u;
        // 0x3950bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950C0u;
        goto label_3950c0;
    }
    ctx->pc = 0x3950B8u;
    SET_GPR_U32(ctx, 31, 0x3950C0u);
    ctx->pc = 0x3950BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3950B8u;
    // 0x3950bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384BD0u, 0x3950B8u, 0x3950C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3950C0u;
label_3950c0:
    // 0x3950c0: 0x1051001b  beq         $v0, $s1, . + 4 + (0x1B << 2)
label_3950c4:
    if (ctx->pc == 0x3950C4u) {
        ctx->pc = 0x3950C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950C0u;
        // 0x3950c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950C8u;
        goto label_3950c8;
    }
    ctx->pc = 0x3950C0u;
    {
        const bool branch_taken_0x3950c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3950C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950C0u;
        // 0x3950c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950c0) {
            ctx->pc = 0x395130u;
            goto label_395130;
        }
    }
    ctx->pc = 0x3950C8u;
label_3950c8:
    // 0x3950c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3950c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3950cc:
    // 0x3950cc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3950ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3950d0:
    // 0x3950d0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3950d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3950d4:
    // 0x3950d4: 0x40f809  jalr        $v0
label_3950d8:
    if (ctx->pc == 0x3950D8u) {
        ctx->pc = 0x3950D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950D4u;
        // 0x3950d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950DCu;
        goto label_3950dc;
    }
    ctx->pc = 0x3950D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3950DCu);
        ctx->pc = 0x3950D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950D4u;
        // 0x3950d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3950D4u, 0x3950DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3950DCu;
label_3950dc:
    // 0x3950dc: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x3950dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_3950e0:
    // 0x3950e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3950e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3950e4:
    // 0x3950e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3950e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3950e8:
    // 0x3950e8: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
label_3950ec:
    if (ctx->pc == 0x3950ECu) {
        ctx->pc = 0x3950ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950E8u;
        // 0x3950ec: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950F0u;
        goto label_3950f0;
    }
    ctx->pc = 0x3950E8u;
    {
        const bool branch_taken_0x3950e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3950ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950E8u;
        // 0x3950ec: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950e8) {
            ctx->pc = 0x39512Cu;
            goto label_39512c;
        }
    }
    ctx->pc = 0x3950F0u;
label_3950f0:
    // 0x3950f0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3950f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3950f4:
    // 0x3950f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3950f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3950f8:
    // 0x3950f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3950fc:
    if (ctx->pc == 0x3950FCu) {
        ctx->pc = 0x3950FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950F8u;
        // 0x3950fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395100u;
        goto label_395100;
    }
    ctx->pc = 0x3950F8u;
    {
        const bool branch_taken_0x3950f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3950f8) {
            ctx->pc = 0x3950FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950F8u;
            // 0x3950fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395130u;
            goto label_395130;
        }
    }
    ctx->pc = 0x395100u;
label_395100:
    // 0x395100: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x395100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395104:
    // 0x395104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x395104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_395108:
    // 0x395108: 0x0  nop
    ctx->pc = 0x395108u;
    // NOP
label_39510c:
    // 0x39510c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39510cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395110:
    // 0x395110: 0x0  nop
    ctx->pc = 0x395110u;
    // NOP
label_395114:
    // 0x395114: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_395118:
    if (ctx->pc == 0x395118u) {
        ctx->pc = 0x395118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395114u;
        // 0x395118: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39511Cu;
        goto label_39511c;
    }
    ctx->pc = 0x395114u;
    {
        const bool branch_taken_0x395114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x395118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395114u;
        // 0x395118: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395114) {
            ctx->pc = 0x39512Cu;
            goto label_39512c;
        }
    }
    ctx->pc = 0x39511Cu;
label_39511c:
    // 0x39511c: 0x9203010f  lbu         $v1, 0x10F($s0)
    ctx->pc = 0x39511cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_395120:
    // 0x395120: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x395120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_395124:
    // 0x395124: 0x10000002  b           . + 4 + (0x2 << 2)
label_395128:
    if (ctx->pc == 0x395128u) {
        ctx->pc = 0x395128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395124u;
        // 0x395128: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39512Cu;
        goto label_39512c;
    }
    ctx->pc = 0x395124u;
    {
        const bool branch_taken_0x395124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395124u;
        // 0x395128: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395124) {
            ctx->pc = 0x395130u;
            goto label_395130;
        }
    }
    ctx->pc = 0x39512Cu;
label_39512c:
    // 0x39512c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39512cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395130:
    // 0x395130: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x395130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_395134:
    // 0x395134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x395134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395138:
    // 0x395138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39513c:
    // 0x39513c: 0x3e00008  jr          $ra
label_395140:
    if (ctx->pc == 0x395140u) {
        ctx->pc = 0x395140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39513Cu;
        // 0x395140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395144u;
        goto label_395144;
    }
    ctx->pc = 0x39513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39513Cu;
        // 0x395140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39513Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395144u;
label_395144:
    // 0x395144: 0x0  nop
    ctx->pc = 0x395144u;
    // NOP
    ctx->pc = 0x395148u;
}
