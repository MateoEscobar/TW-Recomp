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

// Function: sub_003428D0
// Address: 0x3428d0 - 0x3429e8
void sub_003428D0_0x3428d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003428D0_0x3428d0");
#endif

    switch (ctx->pc) {
        case 0x3428d0u: goto label_3428d0;
        case 0x3428d4u: goto label_3428d4;
        case 0x3428d8u: goto label_3428d8;
        case 0x3428dcu: goto label_3428dc;
        case 0x3428e0u: goto label_3428e0;
        case 0x3428e4u: goto label_3428e4;
        case 0x3428e8u: goto label_3428e8;
        case 0x3428ecu: goto label_3428ec;
        case 0x3428f0u: goto label_3428f0;
        case 0x3428f4u: goto label_3428f4;
        case 0x3428f8u: goto label_3428f8;
        case 0x3428fcu: goto label_3428fc;
        case 0x342900u: goto label_342900;
        case 0x342904u: goto label_342904;
        case 0x342908u: goto label_342908;
        case 0x34290cu: goto label_34290c;
        case 0x342910u: goto label_342910;
        case 0x342914u: goto label_342914;
        case 0x342918u: goto label_342918;
        case 0x34291cu: goto label_34291c;
        case 0x342920u: goto label_342920;
        case 0x342924u: goto label_342924;
        case 0x342928u: goto label_342928;
        case 0x34292cu: goto label_34292c;
        case 0x342930u: goto label_342930;
        case 0x342934u: goto label_342934;
        case 0x342938u: goto label_342938;
        case 0x34293cu: goto label_34293c;
        case 0x342940u: goto label_342940;
        case 0x342944u: goto label_342944;
        case 0x342948u: goto label_342948;
        case 0x34294cu: goto label_34294c;
        case 0x342950u: goto label_342950;
        case 0x342954u: goto label_342954;
        case 0x342958u: goto label_342958;
        case 0x34295cu: goto label_34295c;
        case 0x342960u: goto label_342960;
        case 0x342964u: goto label_342964;
        case 0x342968u: goto label_342968;
        case 0x34296cu: goto label_34296c;
        case 0x342970u: goto label_342970;
        case 0x342974u: goto label_342974;
        case 0x342978u: goto label_342978;
        case 0x34297cu: goto label_34297c;
        case 0x342980u: goto label_342980;
        case 0x342984u: goto label_342984;
        case 0x342988u: goto label_342988;
        case 0x34298cu: goto label_34298c;
        case 0x342990u: goto label_342990;
        case 0x342994u: goto label_342994;
        case 0x342998u: goto label_342998;
        case 0x34299cu: goto label_34299c;
        case 0x3429a0u: goto label_3429a0;
        case 0x3429a4u: goto label_3429a4;
        case 0x3429a8u: goto label_3429a8;
        case 0x3429acu: goto label_3429ac;
        case 0x3429b0u: goto label_3429b0;
        case 0x3429b4u: goto label_3429b4;
        case 0x3429b8u: goto label_3429b8;
        case 0x3429bcu: goto label_3429bc;
        case 0x3429c0u: goto label_3429c0;
        case 0x3429c4u: goto label_3429c4;
        case 0x3429c8u: goto label_3429c8;
        case 0x3429ccu: goto label_3429cc;
        case 0x3429d0u: goto label_3429d0;
        case 0x3429d4u: goto label_3429d4;
        case 0x3429d8u: goto label_3429d8;
        case 0x3429dcu: goto label_3429dc;
        case 0x3429e0u: goto label_3429e0;
        case 0x3429e4u: goto label_3429e4;
        default: break;
    }

    ctx->pc = 0x3428d0u;

label_3428d0:
    // 0x3428d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3428d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3428d4:
    // 0x3428d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3428d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3428d8:
    // 0x3428d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3428d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3428dc:
    // 0x3428dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3428dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3428e0:
    // 0x3428e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3428e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3428e4:
    // 0x3428e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3428e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3428e8:
    // 0x3428e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3428e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3428ec:
    // 0x3428ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3428f0:
    // 0x3428f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3428f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3428f4:
    // 0x3428f4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3428f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3428f8:
    // 0x3428f8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x3428f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_3428fc:
    // 0x3428fc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3428fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_342900:
    // 0x342900: 0x60f809  jalr        $v1
label_342904:
    if (ctx->pc == 0x342904u) {
        ctx->pc = 0x342904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342900u;
        // 0x342904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342908u;
        goto label_342908;
    }
    ctx->pc = 0x342900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342908u);
        ctx->pc = 0x342904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342900u;
        // 0x342904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342900u, 0x342908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342908u;
label_342908:
    // 0x342908: 0x6010015  bgez        $s0, . + 4 + (0x15 << 2)
label_34290c:
    if (ctx->pc == 0x34290Cu) {
        ctx->pc = 0x34290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342908u;
        // 0x34290c: 0x2603fffe  addiu       $v1, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342910u;
        goto label_342910;
    }
    ctx->pc = 0x342908u;
    {
        const bool branch_taken_0x342908 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x34290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342908u;
        // 0x34290c: 0x2603fffe  addiu       $v1, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342908) {
            ctx->pc = 0x342960u;
            goto label_342960;
        }
    }
    ctx->pc = 0x342910u;
label_342910:
    // 0x342910: 0x16400030  bnez        $s2, . + 4 + (0x30 << 2)
label_342914:
    if (ctx->pc == 0x342914u) {
        ctx->pc = 0x342914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342910u;
        // 0x342914: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342918u;
        goto label_342918;
    }
    ctx->pc = 0x342910u;
    {
        const bool branch_taken_0x342910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x342914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342910u;
        // 0x342914: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342910) {
            ctx->pc = 0x3429D4u;
            goto label_3429d4;
        }
    }
    ctx->pc = 0x342918u;
label_342918:
    // 0x342918: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x342918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_34291c:
    // 0x34291c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_342920:
    if (ctx->pc == 0x342920u) {
        ctx->pc = 0x342920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34291Cu;
        // 0x342920: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342924u;
        goto label_342924;
    }
    ctx->pc = 0x34291Cu;
    {
        const bool branch_taken_0x34291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34291c) {
            ctx->pc = 0x342920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34291Cu;
            // 0x342920: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3429D8u;
            goto label_3429d8;
        }
    }
    ctx->pc = 0x342924u;
label_342924:
    // 0x342924: 0x8e300080  lw          $s0, 0x80($s1)
    ctx->pc = 0x342924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_342928:
    // 0x342928: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_34292c:
    if (ctx->pc == 0x34292Cu) {
        ctx->pc = 0x34292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342928u;
        // 0x34292c: 0xae2000c0  sw          $zero, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342930u;
        goto label_342930;
    }
    ctx->pc = 0x342928u;
    {
        const bool branch_taken_0x342928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342928u;
        // 0x34292c: 0xae2000c0  sw          $zero, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342928) {
            ctx->pc = 0x3429D0u;
            goto label_3429d0;
        }
    }
    ctx->pc = 0x342930u;
label_342930:
    // 0x342930: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x342930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_342934:
    // 0x342934: 0x0  nop
    ctx->pc = 0x342934u;
    // NOP
label_342938:
    // 0x342938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34293c:
    // 0x34293c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x34293cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_342940:
    // 0x342940: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_342944:
    // 0x342944: 0x60f809  jalr        $v1
label_342948:
    if (ctx->pc == 0x342948u) {
        ctx->pc = 0x342948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342944u;
        // 0x342948: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34294Cu;
        goto label_34294c;
    }
    ctx->pc = 0x342944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34294Cu);
        ctx->pc = 0x342948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342944u;
        // 0x342948: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342944u, 0x34294Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34294Cu;
label_34294c:
    // 0x34294c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342950:
    // 0x342950: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_342954:
    if (ctx->pc == 0x342954u) {
        ctx->pc = 0x342954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342950u;
        // 0x342954: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342958u;
        goto label_342958;
    }
    ctx->pc = 0x342950u;
    {
        const bool branch_taken_0x342950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x342950) {
            ctx->pc = 0x342954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342950u;
            // 0x342954: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342938;
        }
    }
    ctx->pc = 0x342958u;
label_342958:
    // 0x342958: 0x1000001e  b           . + 4 + (0x1E << 2)
label_34295c:
    if (ctx->pc == 0x34295Cu) {
        ctx->pc = 0x34295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342958u;
        // 0x34295c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342960u;
        goto label_342960;
    }
    ctx->pc = 0x342958u;
    {
        const bool branch_taken_0x342958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342958u;
        // 0x34295c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342958) {
            ctx->pc = 0x3429D4u;
            goto label_3429d4;
        }
    }
    ctx->pc = 0x342960u;
label_342960:
    // 0x342960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x342960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342964:
    // 0x342964: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_342968:
    if (ctx->pc == 0x342968u) {
        ctx->pc = 0x342968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342964u;
        // 0x342968: 0x621804  sllv        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34296Cu;
        goto label_34296c;
    }
    ctx->pc = 0x342964u;
    {
        const bool branch_taken_0x342964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x342968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342964u;
        // 0x342968: 0x621804  sllv        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342964) {
            ctx->pc = 0x342984u;
            goto label_342984;
        }
    }
    ctx->pc = 0x34296Cu;
label_34296c:
    // 0x34296c: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x34296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_342970:
    // 0x342970: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x342970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_342974:
    // 0x342974: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_342978:
    if (ctx->pc == 0x342978u) {
        ctx->pc = 0x342978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342974u;
        // 0x342978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34297Cu;
        goto label_34297c;
    }
    ctx->pc = 0x342974u;
    {
        const bool branch_taken_0x342974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342974) {
            ctx->pc = 0x342978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342974u;
            // 0x342978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3429D4u;
            goto label_3429d4;
        }
    }
    ctx->pc = 0x34297Cu;
label_34297c:
    // 0x34297c: 0x10000006  b           . + 4 + (0x6 << 2)
label_342980:
    if (ctx->pc == 0x342980u) {
        ctx->pc = 0x342980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34297Cu;
        // 0x342980: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342984u;
        goto label_342984;
    }
    ctx->pc = 0x34297Cu;
    {
        const bool branch_taken_0x34297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34297Cu;
        // 0x342980: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34297c) {
            ctx->pc = 0x342998u;
            goto label_342998;
        }
    }
    ctx->pc = 0x342984u;
label_342984:
    // 0x342984: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x342984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_342988:
    // 0x342988: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x342988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34298c:
    // 0x34298c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_342990:
    if (ctx->pc == 0x342990u) {
        ctx->pc = 0x342990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34298Cu;
        // 0x342990: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342994u;
        goto label_342994;
    }
    ctx->pc = 0x34298Cu;
    {
        const bool branch_taken_0x34298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34298Cu;
        // 0x342990: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34298c) {
            ctx->pc = 0x3429D0u;
            goto label_3429d0;
        }
    }
    ctx->pc = 0x342994u;
label_342994:
    // 0x342994: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x342994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_342998:
    // 0x342998: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x342998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_34299c:
    // 0x34299c: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x34299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3429a0:
    // 0x3429a0: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_3429a4:
    if (ctx->pc == 0x3429A4u) {
        ctx->pc = 0x3429A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429A0u;
        // 0x3429a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429A8u;
        goto label_3429a8;
    }
    ctx->pc = 0x3429A0u;
    {
        const bool branch_taken_0x3429a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3429a0) {
            ctx->pc = 0x3429A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3429A0u;
            // 0x3429a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3429D4u;
            goto label_3429d4;
        }
    }
    ctx->pc = 0x3429A8u;
label_3429a8:
    // 0x3429a8: 0x80c20031  lb          $v0, 0x31($a2)
    ctx->pc = 0x3429a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 49)));
label_3429ac:
    // 0x3429ac: 0x0  nop
    ctx->pc = 0x3429acu;
    // NOP
label_3429b0:
    // 0x3429b0: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
label_3429b4:
    if (ctx->pc == 0x3429B4u) {
        ctx->pc = 0x3429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429B0u;
        // 0x3429b4: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429B8u;
        goto label_3429b8;
    }
    ctx->pc = 0x3429B0u;
    {
        const bool branch_taken_0x3429b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3429b0) {
            ctx->pc = 0x3429B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3429B0u;
            // 0x3429b4: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3429A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3429a0;
        }
    }
    ctx->pc = 0x3429B8u;
label_3429b8:
    // 0x3429b8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x3429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_3429bc:
    // 0x3429bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3429bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3429c0:
    // 0x3429c0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x3429c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_3429c4:
    // 0x3429c4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3429c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3429c8:
    // 0x3429c8: 0x60f809  jalr        $v1
label_3429cc:
    if (ctx->pc == 0x3429CCu) {
        ctx->pc = 0x3429CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429C8u;
        // 0x3429cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429D0u;
        goto label_3429d0;
    }
    ctx->pc = 0x3429C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3429D0u);
        ctx->pc = 0x3429CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429C8u;
        // 0x3429cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429C8u, 0x3429D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3429D0u;
label_3429d0:
    // 0x3429d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3429d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3429d4:
    // 0x3429d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3429d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3429d8:
    // 0x3429d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3429d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3429dc:
    // 0x3429dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3429dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3429e0:
    // 0x3429e0: 0x3e00008  jr          $ra
label_3429e4:
    if (ctx->pc == 0x3429E4u) {
        ctx->pc = 0x3429E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429E0u;
        // 0x3429e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429E8u;
        goto label_fallthrough_0x3429e0;
    }
    ctx->pc = 0x3429E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3429E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429E0u;
        // 0x3429e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3429e0:
    ctx->pc = 0x3429E8u;
}
