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

// Function: sub_003BF900
// Address: 0x3bf900 - 0x3bf9d8
void sub_003BF900_0x3bf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF900_0x3bf900");
#endif

    switch (ctx->pc) {
        case 0x3bf900u: goto label_3bf900;
        case 0x3bf904u: goto label_3bf904;
        case 0x3bf908u: goto label_3bf908;
        case 0x3bf90cu: goto label_3bf90c;
        case 0x3bf910u: goto label_3bf910;
        case 0x3bf914u: goto label_3bf914;
        case 0x3bf918u: goto label_3bf918;
        case 0x3bf91cu: goto label_3bf91c;
        case 0x3bf920u: goto label_3bf920;
        case 0x3bf924u: goto label_3bf924;
        case 0x3bf928u: goto label_3bf928;
        case 0x3bf92cu: goto label_3bf92c;
        case 0x3bf930u: goto label_3bf930;
        case 0x3bf934u: goto label_3bf934;
        case 0x3bf938u: goto label_3bf938;
        case 0x3bf93cu: goto label_3bf93c;
        case 0x3bf940u: goto label_3bf940;
        case 0x3bf944u: goto label_3bf944;
        case 0x3bf948u: goto label_3bf948;
        case 0x3bf94cu: goto label_3bf94c;
        case 0x3bf950u: goto label_3bf950;
        case 0x3bf954u: goto label_3bf954;
        case 0x3bf958u: goto label_3bf958;
        case 0x3bf95cu: goto label_3bf95c;
        case 0x3bf960u: goto label_3bf960;
        case 0x3bf964u: goto label_3bf964;
        case 0x3bf968u: goto label_3bf968;
        case 0x3bf96cu: goto label_3bf96c;
        case 0x3bf970u: goto label_3bf970;
        case 0x3bf974u: goto label_3bf974;
        case 0x3bf978u: goto label_3bf978;
        case 0x3bf97cu: goto label_3bf97c;
        case 0x3bf980u: goto label_3bf980;
        case 0x3bf984u: goto label_3bf984;
        case 0x3bf988u: goto label_3bf988;
        case 0x3bf98cu: goto label_3bf98c;
        case 0x3bf990u: goto label_3bf990;
        case 0x3bf994u: goto label_3bf994;
        case 0x3bf998u: goto label_3bf998;
        case 0x3bf99cu: goto label_3bf99c;
        case 0x3bf9a0u: goto label_3bf9a0;
        case 0x3bf9a4u: goto label_3bf9a4;
        case 0x3bf9a8u: goto label_3bf9a8;
        case 0x3bf9acu: goto label_3bf9ac;
        case 0x3bf9b0u: goto label_3bf9b0;
        case 0x3bf9b4u: goto label_3bf9b4;
        case 0x3bf9b8u: goto label_3bf9b8;
        case 0x3bf9bcu: goto label_3bf9bc;
        case 0x3bf9c0u: goto label_3bf9c0;
        case 0x3bf9c4u: goto label_3bf9c4;
        case 0x3bf9c8u: goto label_3bf9c8;
        case 0x3bf9ccu: goto label_3bf9cc;
        case 0x3bf9d0u: goto label_3bf9d0;
        case 0x3bf9d4u: goto label_3bf9d4;
        default: break;
    }

    ctx->pc = 0x3bf900u;

label_3bf900:
    // 0x3bf900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bf900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3bf904:
    // 0x3bf904: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bf904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3bf908:
    // 0x3bf908: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bf908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3bf90c:
    // 0x3bf90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf910:
    // 0x3bf910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bf910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bf914:
    // 0x3bf914: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3bf914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3bf918:
    // 0x3bf918: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bf918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf91c:
    // 0x3bf91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bf920:
    // 0x3bf920: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3bf920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf924:
    // 0x3bf924: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bf924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bf928:
    // 0x3bf928: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bf928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bf92c:
    // 0x3bf92c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bf92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bf930:
    // 0x3bf930: 0x40f809  jalr        $v0
label_3bf934:
    if (ctx->pc == 0x3BF934u) {
        ctx->pc = 0x3BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF930u;
        // 0x3bf934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF938u;
        goto label_3bf938;
    }
    ctx->pc = 0x3BF930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF938u);
        ctx->pc = 0x3BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF930u;
        // 0x3bf934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF930u, 0x3BF938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF938u;
label_3bf938:
    // 0x3bf938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bf938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf93c:
    // 0x3bf93c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3bf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bf940:
    // 0x3bf940: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3bf944:
    if (ctx->pc == 0x3BF944u) {
        ctx->pc = 0x3BF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF940u;
        // 0x3bf944: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF948u;
        goto label_3bf948;
    }
    ctx->pc = 0x3BF940u;
    {
        const bool branch_taken_0x3bf940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF940u;
        // 0x3bf944: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf940) {
            ctx->pc = 0x3BF958u;
            goto label_3bf958;
        }
    }
    ctx->pc = 0x3BF948u;
label_3bf948:
    // 0x3bf948: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
label_3bf94c:
    if (ctx->pc == 0x3BF94Cu) {
        ctx->pc = 0x3BF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF948u;
        // 0x3bf94c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF950u;
        goto label_3bf950;
    }
    ctx->pc = 0x3BF948u;
    {
        const bool branch_taken_0x3bf948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF948u;
        // 0x3bf94c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf948) {
            ctx->pc = 0x3BF974u;
            goto label_3bf974;
        }
    }
    ctx->pc = 0x3BF950u;
label_3bf950:
    // 0x3bf950: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3bf954:
    if (ctx->pc == 0x3BF954u) {
        ctx->pc = 0x3BF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF950u;
        // 0x3bf954: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF958u;
        goto label_3bf958;
    }
    ctx->pc = 0x3BF950u;
    {
        const bool branch_taken_0x3bf950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF950u;
        // 0x3bf954: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf950) {
            ctx->pc = 0x3BF9C4u;
            goto label_3bf9c4;
        }
    }
    ctx->pc = 0x3BF958u;
label_3bf958:
    // 0x3bf958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3bf958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bf95c:
    // 0x3bf95c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3bf95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3bf960:
    // 0x3bf960: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3bf960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3bf964:
    // 0x3bf964: 0x60f809  jalr        $v1
label_3bf968:
    if (ctx->pc == 0x3BF968u) {
        ctx->pc = 0x3BF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF964u;
        // 0x3bf968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF96Cu;
        goto label_3bf96c;
    }
    ctx->pc = 0x3BF964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BF96Cu);
        ctx->pc = 0x3BF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF964u;
        // 0x3bf968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF964u, 0x3BF96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF96Cu;
label_3bf96c:
    // 0x3bf96c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3bf970:
    if (ctx->pc == 0x3BF970u) {
        ctx->pc = 0x3BF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF96Cu;
        // 0x3bf970: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF974u;
        goto label_3bf974;
    }
    ctx->pc = 0x3BF96Cu;
    {
        const bool branch_taken_0x3bf96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF96Cu;
        // 0x3bf970: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf96c) {
            ctx->pc = 0x3BF9C0u;
            goto label_3bf9c0;
        }
    }
    ctx->pc = 0x3BF974u;
label_3bf974:
    // 0x3bf974: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x3bf974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bf978:
    // 0x3bf978: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3bf97c:
    if (ctx->pc == 0x3BF97Cu) {
        ctx->pc = 0x3BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF978u;
        // 0x3bf97c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF980u;
        goto label_3bf980;
    }
    ctx->pc = 0x3BF978u;
    {
        const bool branch_taken_0x3bf978 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF978u;
        // 0x3bf97c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf978) {
            ctx->pc = 0x3BF99Cu;
            goto label_3bf99c;
        }
    }
    ctx->pc = 0x3BF980u;
label_3bf980:
    // 0x3bf980: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3bf980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3bf984:
    // 0x3bf984: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3bf984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bf988:
    // 0x3bf988: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3bf988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3bf98c:
    // 0x3bf98c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3bf98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3bf990:
    // 0x3bf990: 0x60f809  jalr        $v1
label_3bf994:
    if (ctx->pc == 0x3BF994u) {
        ctx->pc = 0x3BF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF990u;
        // 0x3bf994: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF998u;
        goto label_3bf998;
    }
    ctx->pc = 0x3BF990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BF998u);
        ctx->pc = 0x3BF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF990u;
        // 0x3bf994: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF990u, 0x3BF998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF998u;
label_3bf998:
    // 0x3bf998: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3bf998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3bf99c:
    // 0x3bf99c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3bf99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bf9a0:
    // 0x3bf9a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_3bf9a4:
    if (ctx->pc == 0x3BF9A4u) {
        ctx->pc = 0x3BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9A0u;
        // 0x3bf9a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF9A8u;
        goto label_3bf9a8;
    }
    ctx->pc = 0x3BF9A0u;
    {
        const bool branch_taken_0x3bf9a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9A0u;
        // 0x3bf9a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf9a0) {
            ctx->pc = 0x3BF9C0u;
            goto label_3bf9c0;
        }
    }
    ctx->pc = 0x3BF9A8u;
label_3bf9a8:
    // 0x3bf9a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bf9ac:
    // 0x3bf9ac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3bf9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3bf9b0:
    // 0x3bf9b0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3bf9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3bf9b4:
    // 0x3bf9b4: 0x60f809  jalr        $v1
label_3bf9b8:
    if (ctx->pc == 0x3BF9B8u) {
        ctx->pc = 0x3BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9B4u;
        // 0x3bf9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF9BCu;
        goto label_3bf9bc;
    }
    ctx->pc = 0x3BF9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BF9BCu);
        ctx->pc = 0x3BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9B4u;
        // 0x3bf9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF9B4u, 0x3BF9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF9BCu;
label_3bf9bc:
    // 0x3bf9bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bf9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bf9c0:
    // 0x3bf9c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bf9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf9c4:
    // 0x3bf9c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bf9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf9c8:
    // 0x3bf9c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3bf9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf9cc:
    // 0x3bf9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf9d0:
    // 0x3bf9d0: 0x3e00008  jr          $ra
label_3bf9d4:
    if (ctx->pc == 0x3BF9D4u) {
        ctx->pc = 0x3BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9D0u;
        // 0x3bf9d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF9D8u;
        goto label_fallthrough_0x3bf9d0;
    }
    ctx->pc = 0x3BF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9D0u;
        // 0x3bf9d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bf9d0:
    ctx->pc = 0x3BF9D8u;
}
