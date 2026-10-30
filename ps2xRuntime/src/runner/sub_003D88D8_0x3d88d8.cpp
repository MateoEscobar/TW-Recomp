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

// Function: sub_003D88D8
// Address: 0x3d88d8 - 0x3d89a0
void sub_003D88D8_0x3d88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D88D8_0x3d88d8");
#endif

    switch (ctx->pc) {
        case 0x3d88d8u: goto label_3d88d8;
        case 0x3d88dcu: goto label_3d88dc;
        case 0x3d88e0u: goto label_3d88e0;
        case 0x3d88e4u: goto label_3d88e4;
        case 0x3d88e8u: goto label_3d88e8;
        case 0x3d88ecu: goto label_3d88ec;
        case 0x3d88f0u: goto label_3d88f0;
        case 0x3d88f4u: goto label_3d88f4;
        case 0x3d88f8u: goto label_3d88f8;
        case 0x3d88fcu: goto label_3d88fc;
        case 0x3d8900u: goto label_3d8900;
        case 0x3d8904u: goto label_3d8904;
        case 0x3d8908u: goto label_3d8908;
        case 0x3d890cu: goto label_3d890c;
        case 0x3d8910u: goto label_3d8910;
        case 0x3d8914u: goto label_3d8914;
        case 0x3d8918u: goto label_3d8918;
        case 0x3d891cu: goto label_3d891c;
        case 0x3d8920u: goto label_3d8920;
        case 0x3d8924u: goto label_3d8924;
        case 0x3d8928u: goto label_3d8928;
        case 0x3d892cu: goto label_3d892c;
        case 0x3d8930u: goto label_3d8930;
        case 0x3d8934u: goto label_3d8934;
        case 0x3d8938u: goto label_3d8938;
        case 0x3d893cu: goto label_3d893c;
        case 0x3d8940u: goto label_3d8940;
        case 0x3d8944u: goto label_3d8944;
        case 0x3d8948u: goto label_3d8948;
        case 0x3d894cu: goto label_3d894c;
        case 0x3d8950u: goto label_3d8950;
        case 0x3d8954u: goto label_3d8954;
        case 0x3d8958u: goto label_3d8958;
        case 0x3d895cu: goto label_3d895c;
        case 0x3d8960u: goto label_3d8960;
        case 0x3d8964u: goto label_3d8964;
        case 0x3d8968u: goto label_3d8968;
        case 0x3d896cu: goto label_3d896c;
        case 0x3d8970u: goto label_3d8970;
        case 0x3d8974u: goto label_3d8974;
        case 0x3d8978u: goto label_3d8978;
        case 0x3d897cu: goto label_3d897c;
        case 0x3d8980u: goto label_3d8980;
        case 0x3d8984u: goto label_3d8984;
        case 0x3d8988u: goto label_3d8988;
        case 0x3d898cu: goto label_3d898c;
        case 0x3d8990u: goto label_3d8990;
        case 0x3d8994u: goto label_3d8994;
        case 0x3d8998u: goto label_3d8998;
        case 0x3d899cu: goto label_3d899c;
        default: break;
    }

    ctx->pc = 0x3d88d8u;

label_3d88d8:
    // 0x3d88d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d88d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d88dc:
    // 0x3d88dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d88dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d88e0:
    // 0x3d88e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d88e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d88e4:
    // 0x3d88e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d88e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d88e8:
    // 0x3d88e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d88ec:
    // 0x3d88ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d88ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d88f0:
    // 0x3d88f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d88f4:
    // 0x3d88f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d88f8:
    // 0x3d88f8: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d88f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d88fc:
    // 0x3d88fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8900:
    // 0x3d8900: 0x40f809  jalr        $v0
label_3d8904:
    if (ctx->pc == 0x3D8904u) {
        ctx->pc = 0x3D8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8900u;
        // 0x3d8904: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8908u;
        goto label_3d8908;
    }
    ctx->pc = 0x3D8900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8908u);
        ctx->pc = 0x3D8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8900u;
        // 0x3d8904: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8900u, 0x3D8908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8908u;
label_3d8908:
    // 0x3d8908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d8908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d890c:
    // 0x3d890c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3d890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3d8910:
    // 0x3d8910: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_3d8914:
    if (ctx->pc == 0x3D8914u) {
        ctx->pc = 0x3D8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8910u;
        // 0x3d8914: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8918u;
        goto label_3d8918;
    }
    ctx->pc = 0x3D8910u;
    {
        const bool branch_taken_0x3d8910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8910u;
        // 0x3d8914: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8910) {
            ctx->pc = 0x3D8928u;
            goto label_3d8928;
        }
    }
    ctx->pc = 0x3D8918u;
label_3d8918:
    // 0x3d8918: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
label_3d891c:
    if (ctx->pc == 0x3D891Cu) {
        ctx->pc = 0x3D891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8918u;
        // 0x3d891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8920u;
        goto label_3d8920;
    }
    ctx->pc = 0x3D8918u;
    {
        const bool branch_taken_0x3d8918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8918) {
            ctx->pc = 0x3D891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8918u;
            // 0x3d891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D895Cu;
            goto label_3d895c;
        }
    }
    ctx->pc = 0x3D8920u;
label_3d8920:
    // 0x3d8920: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d8924:
    if (ctx->pc == 0x3D8924u) {
        ctx->pc = 0x3D8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8920u;
        // 0x3d8924: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8928u;
        goto label_3d8928;
    }
    ctx->pc = 0x3D8920u;
    {
        const bool branch_taken_0x3d8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8920u;
        // 0x3d8924: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8920) {
            ctx->pc = 0x3D8988u;
            goto label_3d8988;
        }
    }
    ctx->pc = 0x3D8928u;
label_3d8928:
    // 0x3d8928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d892c:
    // 0x3d892c: 0xc0ea16a  jal         func_3A85A8
label_3d8930:
    if (ctx->pc == 0x3D8930u) {
        ctx->pc = 0x3D8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D892Cu;
        // 0x3d8930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8934u;
        goto label_3d8934;
    }
    ctx->pc = 0x3D892Cu;
    SET_GPR_U32(ctx, 31, 0x3D8934u);
    ctx->pc = 0x3D8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D892Cu;
    // 0x3d8930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D892Cu, 0x3D8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8934u;
label_3d8934:
    // 0x3d8934: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3d8934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d8938:
    // 0x3d8938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d8938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d893c:
    // 0x3d893c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d8940:
    // 0x3d8940: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d8944:
    // 0x3d8944: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d8944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d8948:
    // 0x3d8948: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d894c:
    // 0x3d894c: 0x60f809  jalr        $v1
label_3d8950:
    if (ctx->pc == 0x3D8950u) {
        ctx->pc = 0x3D8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D894Cu;
        // 0x3d8950: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8954u;
        goto label_3d8954;
    }
    ctx->pc = 0x3D894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D8954u);
        ctx->pc = 0x3D8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D894Cu;
        // 0x3d8950: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D894Cu, 0x3D8954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8954u;
label_3d8954:
    // 0x3d8954: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d8958:
    if (ctx->pc == 0x3D8958u) {
        ctx->pc = 0x3D8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8954u;
        // 0x3d8958: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D895Cu;
        goto label_3d895c;
    }
    ctx->pc = 0x3D8954u;
    {
        const bool branch_taken_0x3d8954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8954u;
        // 0x3d8958: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8954) {
            ctx->pc = 0x3D8988u;
            goto label_3d8988;
        }
    }
    ctx->pc = 0x3D895Cu;
label_3d895c:
    // 0x3d895c: 0xc0ea16a  jal         func_3A85A8
label_3d8960:
    if (ctx->pc == 0x3D8960u) {
        ctx->pc = 0x3D8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D895Cu;
        // 0x3d8960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8964u;
        goto label_3d8964;
    }
    ctx->pc = 0x3D895Cu;
    SET_GPR_U32(ctx, 31, 0x3D8964u);
    ctx->pc = 0x3D8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D895Cu;
    // 0x3d8960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D895Cu, 0x3D8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8964u;
label_3d8964:
    // 0x3d8964: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3d8964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d8968:
    // 0x3d8968: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d8968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d896c:
    // 0x3d896c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d8970:
    // 0x3d8970: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d8974:
    // 0x3d8974: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d8974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d8978:
    // 0x3d8978: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d8978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d897c:
    // 0x3d897c: 0x60f809  jalr        $v1
label_3d8980:
    if (ctx->pc == 0x3D8980u) {
        ctx->pc = 0x3D8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D897Cu;
        // 0x3d8980: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8984u;
        goto label_3d8984;
    }
    ctx->pc = 0x3D897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D8984u);
        ctx->pc = 0x3D8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D897Cu;
        // 0x3d8980: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D897Cu, 0x3D8984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8984u;
label_3d8984:
    // 0x3d8984: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d8984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8988:
    // 0x3d8988: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d8988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d898c:
    // 0x3d898c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d898cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8990:
    // 0x3d8990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8994:
    // 0x3d8994: 0x3e00008  jr          $ra
label_3d8998:
    if (ctx->pc == 0x3D8998u) {
        ctx->pc = 0x3D8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8994u;
        // 0x3d8998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D899Cu;
        goto label_3d899c;
    }
    ctx->pc = 0x3D8994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8994u;
        // 0x3d8998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D899Cu;
label_3d899c:
    // 0x3d899c: 0x0  nop
    ctx->pc = 0x3d899cu;
    // NOP
    ctx->pc = 0x3d89a0u;
}
