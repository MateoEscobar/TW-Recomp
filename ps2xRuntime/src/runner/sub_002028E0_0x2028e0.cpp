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

// Function: sub_002028E0
// Address: 0x2028e0 - 0x2029a8
void sub_002028E0_0x2028e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002028E0_0x2028e0");
#endif

    switch (ctx->pc) {
        case 0x2028e0u: goto label_2028e0;
        case 0x2028e4u: goto label_2028e4;
        case 0x2028e8u: goto label_2028e8;
        case 0x2028ecu: goto label_2028ec;
        case 0x2028f0u: goto label_2028f0;
        case 0x2028f4u: goto label_2028f4;
        case 0x2028f8u: goto label_2028f8;
        case 0x2028fcu: goto label_2028fc;
        case 0x202900u: goto label_202900;
        case 0x202904u: goto label_202904;
        case 0x202908u: goto label_202908;
        case 0x20290cu: goto label_20290c;
        case 0x202910u: goto label_202910;
        case 0x202914u: goto label_202914;
        case 0x202918u: goto label_202918;
        case 0x20291cu: goto label_20291c;
        case 0x202920u: goto label_202920;
        case 0x202924u: goto label_202924;
        case 0x202928u: goto label_202928;
        case 0x20292cu: goto label_20292c;
        case 0x202930u: goto label_202930;
        case 0x202934u: goto label_202934;
        case 0x202938u: goto label_202938;
        case 0x20293cu: goto label_20293c;
        case 0x202940u: goto label_202940;
        case 0x202944u: goto label_202944;
        case 0x202948u: goto label_202948;
        case 0x20294cu: goto label_20294c;
        case 0x202950u: goto label_202950;
        case 0x202954u: goto label_202954;
        case 0x202958u: goto label_202958;
        case 0x20295cu: goto label_20295c;
        case 0x202960u: goto label_202960;
        case 0x202964u: goto label_202964;
        case 0x202968u: goto label_202968;
        case 0x20296cu: goto label_20296c;
        case 0x202970u: goto label_202970;
        case 0x202974u: goto label_202974;
        case 0x202978u: goto label_202978;
        case 0x20297cu: goto label_20297c;
        case 0x202980u: goto label_202980;
        case 0x202984u: goto label_202984;
        case 0x202988u: goto label_202988;
        case 0x20298cu: goto label_20298c;
        case 0x202990u: goto label_202990;
        case 0x202994u: goto label_202994;
        case 0x202998u: goto label_202998;
        case 0x20299cu: goto label_20299c;
        case 0x2029a0u: goto label_2029a0;
        case 0x2029a4u: goto label_2029a4;
        default: break;
    }

    ctx->pc = 0x2028e0u;

label_2028e0:
    // 0x2028e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2028e4:
    // 0x2028e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2028e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2028e8:
    // 0x2028e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2028e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2028ec:
    // 0x2028ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2028ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2028f0:
    // 0x2028f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2028f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2028f4:
    // 0x2028f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2028f8:
    // 0x2028f8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2028fc:
    // 0x2028fc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_202900:
    // 0x202900: 0x40f809  jalr        $v0
label_202904:
    if (ctx->pc == 0x202904u) {
        ctx->pc = 0x202904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202900u;
        // 0x202904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202908u;
        goto label_202908;
    }
    ctx->pc = 0x202900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202908u);
        ctx->pc = 0x202904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202900u;
        // 0x202904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202900u, 0x202908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202908u;
label_202908:
    // 0x202908: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_20290c:
    if (ctx->pc == 0x20290Cu) {
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202908u;
        // 0x20290c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202910u;
        goto label_202910;
    }
    ctx->pc = 0x202908u;
    {
        const bool branch_taken_0x202908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202908u;
        // 0x20290c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202908) {
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x202910u;
label_202910:
    // 0x202910: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202914:
    // 0x202914: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x202914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_202918:
    // 0x202918: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20291c:
    // 0x20291c: 0x40f809  jalr        $v0
label_202920:
    if (ctx->pc == 0x202920u) {
        ctx->pc = 0x202920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20291Cu;
        // 0x202920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202924u;
        goto label_202924;
    }
    ctx->pc = 0x20291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202924u);
        ctx->pc = 0x202920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20291Cu;
        // 0x202920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20291Cu, 0x202924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202924u;
label_202924:
    // 0x202924: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_202928:
    if (ctx->pc == 0x202928u) {
        ctx->pc = 0x202928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202924u;
        // 0x202928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20292Cu;
        goto label_20292c;
    }
    ctx->pc = 0x202924u;
    {
        const bool branch_taken_0x202924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202924u;
        // 0x202928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202924) {
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x20292Cu;
label_20292c:
    // 0x20292c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202930:
    // 0x202930: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_202934:
    // 0x202934: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_202938:
    // 0x202938: 0x40f809  jalr        $v0
label_20293c:
    if (ctx->pc == 0x20293Cu) {
        ctx->pc = 0x20293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202938u;
        // 0x20293c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202940u;
        goto label_202940;
    }
    ctx->pc = 0x202938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202940u);
        ctx->pc = 0x20293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202938u;
        // 0x20293c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202938u, 0x202940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202940u;
label_202940:
    // 0x202940: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_202944:
    if (ctx->pc == 0x202944u) {
        ctx->pc = 0x202944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202940u;
        // 0x202944: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202948u;
        goto label_202948;
    }
    ctx->pc = 0x202940u;
    {
        const bool branch_taken_0x202940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202940u;
        // 0x202944: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202940) {
            ctx->pc = 0x202968u;
            goto label_202968;
        }
    }
    ctx->pc = 0x202948u;
label_202948:
    // 0x202948: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x202948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20294c:
    // 0x20294c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202950:
    // 0x202950: 0xc068992  jal         func_1A2648
label_202954:
    if (ctx->pc == 0x202954u) {
        ctx->pc = 0x202954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202950u;
        // 0x202954: 0x24a5d310  addiu       $a1, $a1, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202958u;
        goto label_202958;
    }
    ctx->pc = 0x202950u;
    SET_GPR_U32(ctx, 31, 0x202958u);
    ctx->pc = 0x202954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202950u;
    // 0x202954: 0x24a5d310  addiu       $a1, $a1, -0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x202950u, 0x202958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202958u;
label_202958:
    // 0x202958: 0xc068998  jal         func_1A2660
label_20295c:
    if (ctx->pc == 0x20295Cu) {
        ctx->pc = 0x20295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202958u;
        // 0x20295c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202960u;
        goto label_202960;
    }
    ctx->pc = 0x202958u;
    SET_GPR_U32(ctx, 31, 0x202960u);
    ctx->pc = 0x20295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202958u;
    // 0x20295c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x202958u, 0x202960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202960u;
label_202960:
    // 0x202960: 0x10000007  b           . + 4 + (0x7 << 2)
label_202964:
    if (ctx->pc == 0x202964u) {
        ctx->pc = 0x202968u;
        goto label_202968;
    }
    ctx->pc = 0x202960u;
    {
        const bool branch_taken_0x202960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202960) {
            ctx->pc = 0x202980u;
            goto label_202980;
        }
    }
    ctx->pc = 0x202968u;
label_202968:
    // 0x202968: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20296c:
    // 0x20296c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202970:
    // 0x202970: 0xc068992  jal         func_1A2648
label_202974:
    if (ctx->pc == 0x202974u) {
        ctx->pc = 0x202974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202970u;
        // 0x202974: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202978u;
        goto label_202978;
    }
    ctx->pc = 0x202970u;
    SET_GPR_U32(ctx, 31, 0x202978u);
    ctx->pc = 0x202974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202970u;
    // 0x202974: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x202970u, 0x202978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202978u;
label_202978:
    // 0x202978: 0xc068998  jal         func_1A2660
label_20297c:
    if (ctx->pc == 0x20297Cu) {
        ctx->pc = 0x20297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202978u;
        // 0x20297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202980u;
        goto label_202980;
    }
    ctx->pc = 0x202978u;
    SET_GPR_U32(ctx, 31, 0x202980u);
    ctx->pc = 0x20297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202978u;
    // 0x20297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x202978u, 0x202980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202980u;
label_202980:
    // 0x202980: 0xc068998  jal         func_1A2660
label_202984:
    if (ctx->pc == 0x202984u) {
        ctx->pc = 0x202984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202980u;
        // 0x202984: 0x26240170  addiu       $a0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202988u;
        goto label_202988;
    }
    ctx->pc = 0x202980u;
    SET_GPR_U32(ctx, 31, 0x202988u);
    ctx->pc = 0x202984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202980u;
    // 0x202984: 0x26240170  addiu       $a0, $s1, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x202980u, 0x202988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202988u;
label_202988:
    // 0x202988: 0xc0745ba  jal         func_1D16E8
label_20298c:
    if (ctx->pc == 0x20298Cu) {
        ctx->pc = 0x20298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202988u;
        // 0x20298c: 0x26240270  addiu       $a0, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202990u;
        goto label_202990;
    }
    ctx->pc = 0x202988u;
    SET_GPR_U32(ctx, 31, 0x202990u);
    ctx->pc = 0x20298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202988u;
    // 0x20298c: 0x26240270  addiu       $a0, $s1, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D16E8u, 0x202988u, 0x202990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202990u;
label_202990:
    // 0x202990: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202994:
    // 0x202994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202998:
    // 0x202998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20299c:
    // 0x20299c: 0x3e00008  jr          $ra
label_2029a0:
    if (ctx->pc == 0x2029A0u) {
        ctx->pc = 0x2029A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20299Cu;
        // 0x2029a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2029A4u;
        goto label_2029a4;
    }
    ctx->pc = 0x20299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2029A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20299Cu;
        // 0x2029a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20299Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2029A4u;
label_2029a4:
    // 0x2029a4: 0x0  nop
    ctx->pc = 0x2029a4u;
    // NOP
    ctx->pc = 0x2029a8u;
}
