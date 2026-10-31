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

// Function: sub_003E7248
// Address: 0x3e7248 - 0x3e7350
void sub_003E7248_0x3e7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7248_0x3e7248");
#endif

    switch (ctx->pc) {
        case 0x3e7248u: goto label_3e7248;
        case 0x3e724cu: goto label_3e724c;
        case 0x3e7250u: goto label_3e7250;
        case 0x3e7254u: goto label_3e7254;
        case 0x3e7258u: goto label_3e7258;
        case 0x3e725cu: goto label_3e725c;
        case 0x3e7260u: goto label_3e7260;
        case 0x3e7264u: goto label_3e7264;
        case 0x3e7268u: goto label_3e7268;
        case 0x3e726cu: goto label_3e726c;
        case 0x3e7270u: goto label_3e7270;
        case 0x3e7274u: goto label_3e7274;
        case 0x3e7278u: goto label_3e7278;
        case 0x3e727cu: goto label_3e727c;
        case 0x3e7280u: goto label_3e7280;
        case 0x3e7284u: goto label_3e7284;
        case 0x3e7288u: goto label_3e7288;
        case 0x3e728cu: goto label_3e728c;
        case 0x3e7290u: goto label_3e7290;
        case 0x3e7294u: goto label_3e7294;
        case 0x3e7298u: goto label_3e7298;
        case 0x3e729cu: goto label_3e729c;
        case 0x3e72a0u: goto label_3e72a0;
        case 0x3e72a4u: goto label_3e72a4;
        case 0x3e72a8u: goto label_3e72a8;
        case 0x3e72acu: goto label_3e72ac;
        case 0x3e72b0u: goto label_3e72b0;
        case 0x3e72b4u: goto label_3e72b4;
        case 0x3e72b8u: goto label_3e72b8;
        case 0x3e72bcu: goto label_3e72bc;
        case 0x3e72c0u: goto label_3e72c0;
        case 0x3e72c4u: goto label_3e72c4;
        case 0x3e72c8u: goto label_3e72c8;
        case 0x3e72ccu: goto label_3e72cc;
        case 0x3e72d0u: goto label_3e72d0;
        case 0x3e72d4u: goto label_3e72d4;
        case 0x3e72d8u: goto label_3e72d8;
        case 0x3e72dcu: goto label_3e72dc;
        case 0x3e72e0u: goto label_3e72e0;
        case 0x3e72e4u: goto label_3e72e4;
        case 0x3e72e8u: goto label_3e72e8;
        case 0x3e72ecu: goto label_3e72ec;
        case 0x3e72f0u: goto label_3e72f0;
        case 0x3e72f4u: goto label_3e72f4;
        case 0x3e72f8u: goto label_3e72f8;
        case 0x3e72fcu: goto label_3e72fc;
        case 0x3e7300u: goto label_3e7300;
        case 0x3e7304u: goto label_3e7304;
        case 0x3e7308u: goto label_3e7308;
        case 0x3e730cu: goto label_3e730c;
        case 0x3e7310u: goto label_3e7310;
        case 0x3e7314u: goto label_3e7314;
        case 0x3e7318u: goto label_3e7318;
        case 0x3e731cu: goto label_3e731c;
        case 0x3e7320u: goto label_3e7320;
        case 0x3e7324u: goto label_3e7324;
        case 0x3e7328u: goto label_3e7328;
        case 0x3e732cu: goto label_3e732c;
        case 0x3e7330u: goto label_3e7330;
        case 0x3e7334u: goto label_3e7334;
        case 0x3e7338u: goto label_3e7338;
        case 0x3e733cu: goto label_3e733c;
        case 0x3e7340u: goto label_3e7340;
        case 0x3e7344u: goto label_3e7344;
        case 0x3e7348u: goto label_3e7348;
        case 0x3e734cu: goto label_3e734c;
        default: break;
    }

    ctx->pc = 0x3e7248u;

label_3e7248:
    // 0x3e7248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e724c:
    // 0x3e724c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e7250:
    // 0x3e7250: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e7250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e7254:
    // 0x3e7254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e7254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e7258:
    // 0x3e7258: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e725c:
    // 0x3e725c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e725cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7260:
    // 0x3e7260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e7264:
    // 0x3e7264: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e7264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e7268:
    // 0x3e7268: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e7268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e726c:
    // 0x3e726c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e726cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e7270:
    // 0x3e7270: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e7274:
    // 0x3e7274: 0x40f809  jalr        $v0
label_3e7278:
    if (ctx->pc == 0x3E7278u) {
        ctx->pc = 0x3E7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7274u;
        // 0x3e7278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E727Cu;
        goto label_3e727c;
    }
    ctx->pc = 0x3E7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E727Cu);
        ctx->pc = 0x3E7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7274u;
        // 0x3e7278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7274u, 0x3E727Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E727Cu;
label_3e727c:
    // 0x3e727c: 0x2603fff6  addiu       $v1, $s0, -0xA
    ctx->pc = 0x3e727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
label_3e7280:
    // 0x3e7280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e7280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7284:
    // 0x3e7284: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x3e7284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
label_3e7288:
    // 0x3e7288: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3e728c:
    if (ctx->pc == 0x3E728Cu) {
        ctx->pc = 0x3E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7288u;
        // 0x3e728c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7290u;
        goto label_3e7290;
    }
    ctx->pc = 0x3E7288u;
    {
        const bool branch_taken_0x3e7288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7288u;
        // 0x3e728c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7288) {
            ctx->pc = 0x3E735Cu;
            return;
        }
    }
    ctx->pc = 0x3E7290u;
label_3e7290:
    // 0x3e7290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e7290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e7294:
    // 0x3e7294: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x3e7294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
label_3e7298:
    // 0x3e7298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e7298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e729c:
    // 0x3e729c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e72a0:
    // 0x3e72a0: 0x800008  jr          $a0
label_3e72a4:
    if (ctx->pc == 0x3E72A4u) {
        ctx->pc = 0x3E72A8u;
        goto label_3e72a8;
    }
    ctx->pc = 0x3E72A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E72A8u: goto label_3e72a8;
            case 0x3E72C4u: goto label_3e72c4;
            case 0x3E72D4u: goto label_3e72d4;
            case 0x3E72E4u: goto label_3e72e4;
            case 0x3E72F8u: goto label_3e72f8;
            case 0x3E730Cu: goto label_3e730c;
            case 0x3E7320u: goto label_3e7320;
            case 0x3E7334u: goto label_3e7334;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E72A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E72A8u;
label_3e72a8:
    // 0x3e72a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e72ac:
    // 0x3e72ac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e72acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e72b0:
    // 0x3e72b0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e72b4:
    // 0x3e72b4: 0x60f809  jalr        $v1
label_3e72b8:
    if (ctx->pc == 0x3E72B8u) {
        ctx->pc = 0x3E72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72B4u;
        // 0x3e72b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72BCu;
        goto label_3e72bc;
    }
    ctx->pc = 0x3E72B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E72BCu);
        ctx->pc = 0x3E72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72B4u;
        // 0x3e72b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E72B4u, 0x3E72BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E72BCu;
label_3e72bc:
    // 0x3e72bc: 0x10000028  b           . + 4 + (0x28 << 2)
label_3e72c0:
    if (ctx->pc == 0x3E72C0u) {
        ctx->pc = 0x3E72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72BCu;
        // 0x3e72c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72C4u;
        goto label_3e72c4;
    }
    ctx->pc = 0x3E72BCu;
    {
        const bool branch_taken_0x3e72bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72BCu;
        // 0x3e72c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72bc) {
            ctx->pc = 0x3E7360u;
            return;
        }
    }
    ctx->pc = 0x3E72C4u;
label_3e72c4:
    // 0x3e72c4: 0xc0ea146  jal         func_3A8518
label_3e72c8:
    if (ctx->pc == 0x3E72C8u) {
        ctx->pc = 0x3E72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72C4u;
        // 0x3e72c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72CCu;
        goto label_3e72cc;
    }
    ctx->pc = 0x3E72C4u;
    SET_GPR_U32(ctx, 31, 0x3E72CCu);
    ctx->pc = 0x3E72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72C4u;
    // 0x3e72c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E72C4u, 0x3E72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72CCu;
label_3e72cc:
    // 0x3e72cc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e72d0:
    if (ctx->pc == 0x3E72D0u) {
        ctx->pc = 0x3E72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72CCu;
        // 0x3e72d0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72D4u;
        goto label_3e72d4;
    }
    ctx->pc = 0x3E72CCu;
    {
        const bool branch_taken_0x3e72cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e72cc) {
            ctx->pc = 0x3E72D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E72CCu;
            // 0x3e72d0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E72E8u;
            goto label_3e72e8;
        }
    }
    ctx->pc = 0x3E72D4u;
label_3e72d4:
    // 0x3e72d4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e72d8:
    // 0x3e72d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e72d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e72dc:
    // 0x3e72dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3e72e0:
    if (ctx->pc == 0x3E72E0u) {
        ctx->pc = 0x3E72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72DCu;
        // 0x3e72e0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72E4u;
        goto label_3e72e4;
    }
    ctx->pc = 0x3E72DCu;
    {
        const bool branch_taken_0x3e72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72DCu;
        // 0x3e72e0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72dc) {
            ctx->pc = 0x3E735Cu;
            return;
        }
    }
    ctx->pc = 0x3E72E4u;
label_3e72e4:
    // 0x3e72e4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e72e8:
    // 0x3e72e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e72ec:
    // 0x3e72ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e72f0:
    // 0x3e72f0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3e72f4:
    if (ctx->pc == 0x3E72F4u) {
        ctx->pc = 0x3E72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72F0u;
        // 0x3e72f4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E72F8u;
        goto label_3e72f8;
    }
    ctx->pc = 0x3E72F0u;
    {
        const bool branch_taken_0x3e72f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72F0u;
        // 0x3e72f4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72f0) {
            ctx->pc = 0x3E735Cu;
            return;
        }
    }
    ctx->pc = 0x3E72F8u;
label_3e72f8:
    // 0x3e72f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e72f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e72fc:
    // 0x3e72fc: 0xc0f9bf6  jal         func_3E6FD8
label_3e7300:
    if (ctx->pc == 0x3E7300u) {
        ctx->pc = 0x3E7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72FCu;
        // 0x3e7300: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7304u;
        goto label_3e7304;
    }
    ctx->pc = 0x3E72FCu;
    SET_GPR_U32(ctx, 31, 0x3E7304u);
    ctx->pc = 0x3E7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72FCu;
    // 0x3e7300: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6FD8u, 0x3E72FCu, 0x3E7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7304u;
label_3e7304:
    // 0x3e7304: 0x10000016  b           . + 4 + (0x16 << 2)
label_3e7308:
    if (ctx->pc == 0x3E7308u) {
        ctx->pc = 0x3E7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7304u;
        // 0x3e7308: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E730Cu;
        goto label_3e730c;
    }
    ctx->pc = 0x3E7304u;
    {
        const bool branch_taken_0x3e7304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7304u;
        // 0x3e7308: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7304) {
            ctx->pc = 0x3E7360u;
            return;
        }
    }
    ctx->pc = 0x3E730Cu;
label_3e730c:
    // 0x3e730c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7310:
    // 0x3e7310: 0xc0f9c18  jal         func_3E7060
label_3e7314:
    if (ctx->pc == 0x3E7314u) {
        ctx->pc = 0x3E7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7310u;
        // 0x3e7314: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7318u;
        goto label_3e7318;
    }
    ctx->pc = 0x3E7310u;
    SET_GPR_U32(ctx, 31, 0x3E7318u);
    ctx->pc = 0x3E7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7310u;
    // 0x3e7314: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7060u, 0x3E7310u, 0x3E7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7318u;
label_3e7318:
    // 0x3e7318: 0x10000011  b           . + 4 + (0x11 << 2)
label_3e731c:
    if (ctx->pc == 0x3E731Cu) {
        ctx->pc = 0x3E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7318u;
        // 0x3e731c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7320u;
        goto label_3e7320;
    }
    ctx->pc = 0x3E7318u;
    {
        const bool branch_taken_0x3e7318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7318u;
        // 0x3e731c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7318) {
            ctx->pc = 0x3E7360u;
            return;
        }
    }
    ctx->pc = 0x3E7320u;
label_3e7320:
    // 0x3e7320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7324:
    // 0x3e7324: 0xc0f9c40  jal         func_3E7100
label_3e7328:
    if (ctx->pc == 0x3E7328u) {
        ctx->pc = 0x3E7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7324u;
        // 0x3e7328: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E732Cu;
        goto label_3e732c;
    }
    ctx->pc = 0x3E7324u;
    SET_GPR_U32(ctx, 31, 0x3E732Cu);
    ctx->pc = 0x3E7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7324u;
    // 0x3e7328: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7100u, 0x3E7324u, 0x3E732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E732Cu;
label_3e732c:
    // 0x3e732c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e7330:
    if (ctx->pc == 0x3E7330u) {
        ctx->pc = 0x3E7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E732Cu;
        // 0x3e7330: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7334u;
        goto label_3e7334;
    }
    ctx->pc = 0x3E732Cu;
    {
        const bool branch_taken_0x3e732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E732Cu;
        // 0x3e7330: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e732c) {
            ctx->pc = 0x3E7360u;
            return;
        }
    }
    ctx->pc = 0x3E7334u;
label_3e7334:
    // 0x3e7334: 0xc0ea146  jal         func_3A8518
label_3e7338:
    if (ctx->pc == 0x3E7338u) {
        ctx->pc = 0x3E7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7334u;
        // 0x3e7338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E733Cu;
        goto label_3e733c;
    }
    ctx->pc = 0x3E7334u;
    SET_GPR_U32(ctx, 31, 0x3E733Cu);
    ctx->pc = 0x3E7338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7334u;
    // 0x3e7338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E7334u, 0x3E733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E733Cu;
label_3e733c:
    // 0x3e733c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7340:
    // 0x3e7340: 0xc0e6ec6  jal         func_39BB18
label_3e7344:
    if (ctx->pc == 0x3E7344u) {
        ctx->pc = 0x3E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7340u;
        // 0x3e7344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7348u;
        goto label_3e7348;
    }
    ctx->pc = 0x3E7340u;
    SET_GPR_U32(ctx, 31, 0x3E7348u);
    ctx->pc = 0x3E7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7340u;
    // 0x3e7344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E7340u, 0x3E7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7348u;
label_3e7348:
    // 0x3e7348: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e734c:
    if (ctx->pc == 0x3E734Cu) {
        ctx->pc = 0x3E734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7348u;
        // 0x3e734c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7350u;
        goto label_fallthrough_0x3e7348;
    }
    ctx->pc = 0x3E7348u;
    {
        const bool branch_taken_0x3e7348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7348u;
        // 0x3e734c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7348) {
            ctx->pc = 0x3E7360u;
            return;
        }
    }
label_fallthrough_0x3e7348:
    ctx->pc = 0x3E7350u;
}
