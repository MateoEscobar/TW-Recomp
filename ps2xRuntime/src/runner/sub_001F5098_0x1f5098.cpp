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

// Function: sub_001F5098
// Address: 0x1f5098 - 0x1f51a0
void sub_001F5098_0x1f5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5098_0x1f5098");
#endif

    switch (ctx->pc) {
        case 0x1f5098u: goto label_1f5098;
        case 0x1f509cu: goto label_1f509c;
        case 0x1f50a0u: goto label_1f50a0;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50a8u: goto label_1f50a8;
        case 0x1f50acu: goto label_1f50ac;
        case 0x1f50b0u: goto label_1f50b0;
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f50c8u: goto label_1f50c8;
        case 0x1f50ccu: goto label_1f50cc;
        case 0x1f50d0u: goto label_1f50d0;
        case 0x1f50d4u: goto label_1f50d4;
        case 0x1f50d8u: goto label_1f50d8;
        case 0x1f50dcu: goto label_1f50dc;
        case 0x1f50e0u: goto label_1f50e0;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f50ecu: goto label_1f50ec;
        case 0x1f50f0u: goto label_1f50f0;
        case 0x1f50f4u: goto label_1f50f4;
        case 0x1f50f8u: goto label_1f50f8;
        case 0x1f50fcu: goto label_1f50fc;
        case 0x1f5100u: goto label_1f5100;
        case 0x1f5104u: goto label_1f5104;
        case 0x1f5108u: goto label_1f5108;
        case 0x1f510cu: goto label_1f510c;
        case 0x1f5110u: goto label_1f5110;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5118u: goto label_1f5118;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f5120u: goto label_1f5120;
        case 0x1f5124u: goto label_1f5124;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f5130u: goto label_1f5130;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5138u: goto label_1f5138;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f5148u: goto label_1f5148;
        case 0x1f514cu: goto label_1f514c;
        case 0x1f5150u: goto label_1f5150;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5158u: goto label_1f5158;
        case 0x1f515cu: goto label_1f515c;
        case 0x1f5160u: goto label_1f5160;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5168u: goto label_1f5168;
        case 0x1f516cu: goto label_1f516c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5174u: goto label_1f5174;
        case 0x1f5178u: goto label_1f5178;
        case 0x1f517cu: goto label_1f517c;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f5184u: goto label_1f5184;
        case 0x1f5188u: goto label_1f5188;
        case 0x1f518cu: goto label_1f518c;
        case 0x1f5190u: goto label_1f5190;
        case 0x1f5194u: goto label_1f5194;
        case 0x1f5198u: goto label_1f5198;
        case 0x1f519cu: goto label_1f519c;
        default: break;
    }

    ctx->pc = 0x1f5098u;

label_1f5098:
    // 0x1f5098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f509c:
    // 0x1f509c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f50a0:
    // 0x1f50a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f50a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a4:
    // 0x1f50a4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f50a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f50a8:
    // 0x1f50a8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1f50ac:
    // 0x1f50ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f50acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f50b0:
    // 0x1f50b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f50b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f50b4:
    // 0x1f50b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f50b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f50b8:
    // 0x1f50b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f50bc:
    // 0x1f50bc: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x1f50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
label_1f50c0:
    // 0x1f50c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f50c4:
    // 0x1f50c4: 0xc080b0c  jal         func_202C30
label_1f50c8:
    if (ctx->pc == 0x1F50C8u) {
        ctx->pc = 0x1F50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50C4u;
        // 0x1f50c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50CCu;
        goto label_1f50cc;
    }
    ctx->pc = 0x1F50C4u;
    SET_GPR_U32(ctx, 31, 0x1F50CCu);
    ctx->pc = 0x1F50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F50C4u;
    // 0x1f50c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F50C4u, 0x1F50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50CCu;
label_1f50cc:
    // 0x1f50cc: 0x24130160  addiu       $s3, $zero, 0x160
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f50d0:
    // 0x1f50d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f50d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f50d4:
    // 0x1f50d4: 0x2684ef80  addiu       $a0, $s4, -0x1080
    ctx->pc = 0x1f50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963072));
label_1f50d8:
    // 0x1f50d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f50d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f50dc:
    // 0x1f50dc: 0xc080b38  jal         func_202CE0
label_1f50e0:
    if (ctx->pc == 0x1F50E0u) {
        ctx->pc = 0x1F50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50DCu;
        // 0x1f50e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50E4u;
        goto label_1f50e4;
    }
    ctx->pc = 0x1F50DCu;
    SET_GPR_U32(ctx, 31, 0x1F50E4u);
    ctx->pc = 0x1F50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F50DCu;
    // 0x1f50e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x1F50DCu, 0x1F50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50E4u;
label_1f50e4:
    // 0x1f50e4: 0x14530022  bne         $v0, $s3, . + 4 + (0x22 << 2)
label_1f50e8:
    if (ctx->pc == 0x1F50E8u) {
        ctx->pc = 0x1F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E4u;
        // 0x1f50e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50ECu;
        goto label_1f50ec;
    }
    ctx->pc = 0x1F50E4u;
    {
        const bool branch_taken_0x1f50e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E4u;
        // 0x1f50e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50e4) {
            ctx->pc = 0x1F5170u;
            goto label_1f5170;
        }
    }
    ctx->pc = 0x1F50ECu;
label_1f50ec:
    // 0x1f50ec: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1f50ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f50f0:
    // 0x1f50f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f50f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50f4:
    // 0x1f50f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f50f8:
    // 0x1f50f8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f50f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f50fc:
    // 0x1f50fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5100:
    // 0x1f5100: 0x60f809  jalr        $v1
label_1f5104:
    if (ctx->pc == 0x1F5104u) {
        ctx->pc = 0x1F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5100u;
        // 0x1f5104: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5108u;
        goto label_1f5108;
    }
    ctx->pc = 0x1F5100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5108u);
        ctx->pc = 0x1F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5100u;
        // 0x1f5104: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5100u, 0x1F5108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5108u;
label_1f5108:
    // 0x1f5108: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f510c:
    // 0x1f510c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f510cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5110:
    // 0x1f5110: 0xc0752e2  jal         func_1D4B88
label_1f5114:
    if (ctx->pc == 0x1F5114u) {
        ctx->pc = 0x1F5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5110u;
        // 0x1f5114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5118u;
        goto label_1f5118;
    }
    ctx->pc = 0x1F5110u;
    SET_GPR_U32(ctx, 31, 0x1F5118u);
    ctx->pc = 0x1F5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5110u;
    // 0x1f5114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1F5110u, 0x1F5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5118u;
label_1f5118:
    // 0x1f5118: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x1f5118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f511c:
    // 0x1f511c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5120:
    // 0x1f5120: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5124:
    // 0x1f5124: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5128:
    // 0x1f5128: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f512c:
    // 0x1f512c: 0x60f809  jalr        $v1
label_1f5130:
    if (ctx->pc == 0x1F5130u) {
        ctx->pc = 0x1F5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F512Cu;
        // 0x1f5130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5134u;
        goto label_1f5134;
    }
    ctx->pc = 0x1F512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5134u);
        ctx->pc = 0x1F5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F512Cu;
        // 0x1f5130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F512Cu, 0x1F5134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5134u;
label_1f5134:
    // 0x1f5134: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f5134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f5138:
    // 0x1f5138: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f513c:
    // 0x1f513c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1f513cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1f5140:
    // 0x1f5140: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1f5140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f5144:
    // 0x1f5144: 0x60f809  jalr        $v1
label_1f5148:
    if (ctx->pc == 0x1F5148u) {
        ctx->pc = 0x1F5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5144u;
        // 0x1f5148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F514Cu;
        goto label_1f514c;
    }
    ctx->pc = 0x1F5144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F514Cu);
        ctx->pc = 0x1F5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5144u;
        // 0x1f5148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5144u, 0x1F514Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F514Cu;
label_1f514c:
    // 0x1f514c: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x1f514cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1f5150:
    // 0x1f5150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5154:
    // 0x1f5154: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5158:
    // 0x1f5158: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f515c:
    // 0x1f515c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5160:
    // 0x1f5160: 0x60f809  jalr        $v1
label_1f5164:
    if (ctx->pc == 0x1F5164u) {
        ctx->pc = 0x1F5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5160u;
        // 0x1f5164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5168u;
        goto label_1f5168;
    }
    ctx->pc = 0x1F5160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5168u);
        ctx->pc = 0x1F5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5160u;
        // 0x1f5164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5160u, 0x1F5168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5168u;
label_1f5168:
    // 0x1f5168: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f516c:
    if (ctx->pc == 0x1F516Cu) {
        ctx->pc = 0x1F516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5168u;
        // 0x1f516c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5170u;
        goto label_1f5170;
    }
    ctx->pc = 0x1F5168u;
    {
        const bool branch_taken_0x1f5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5168u;
        // 0x1f516c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5168) {
            ctx->pc = 0x1F5180u;
            goto label_1f5180;
        }
    }
    ctx->pc = 0x1F5170u;
label_1f5170:
    // 0x1f5170: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x1f5170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f5174:
    // 0x1f5174: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1f5178:
    if (ctx->pc == 0x1F5178u) {
        ctx->pc = 0x1F5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5174u;
        // 0x1f5178: 0x2684ef80  addiu       $a0, $s4, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F517Cu;
        goto label_1f517c;
    }
    ctx->pc = 0x1F5174u;
    {
        const bool branch_taken_0x1f5174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5174u;
        // 0x1f5178: 0x2684ef80  addiu       $a0, $s4, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5174) {
            ctx->pc = 0x1F50D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f50d8;
        }
    }
    ctx->pc = 0x1F517Cu;
label_1f517c:
    // 0x1f517c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5180:
    // 0x1f5180: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5184:
    // 0x1f5184: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f5184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5188:
    // 0x1f5188: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f5188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f518c:
    // 0x1f518c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f518cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5190:
    // 0x1f5190: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f5190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5194:
    // 0x1f5194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5198:
    // 0x1f5198: 0x3e00008  jr          $ra
label_1f519c:
    if (ctx->pc == 0x1F519Cu) {
        ctx->pc = 0x1F519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5198u;
        // 0x1f519c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F51A0u;
        goto label_fallthrough_0x1f5198;
    }
    ctx->pc = 0x1F5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5198u;
        // 0x1f519c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5198:
    ctx->pc = 0x1F51A0u;
}
