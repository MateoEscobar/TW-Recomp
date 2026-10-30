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

// Function: sub_003B0900
// Address: 0x3b0900 - 0x3b0990
void sub_003B0900_0x3b0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0900_0x3b0900");
#endif

    switch (ctx->pc) {
        case 0x3b0900u: goto label_3b0900;
        case 0x3b0904u: goto label_3b0904;
        case 0x3b0908u: goto label_3b0908;
        case 0x3b090cu: goto label_3b090c;
        case 0x3b0910u: goto label_3b0910;
        case 0x3b0914u: goto label_3b0914;
        case 0x3b0918u: goto label_3b0918;
        case 0x3b091cu: goto label_3b091c;
        case 0x3b0920u: goto label_3b0920;
        case 0x3b0924u: goto label_3b0924;
        case 0x3b0928u: goto label_3b0928;
        case 0x3b092cu: goto label_3b092c;
        case 0x3b0930u: goto label_3b0930;
        case 0x3b0934u: goto label_3b0934;
        case 0x3b0938u: goto label_3b0938;
        case 0x3b093cu: goto label_3b093c;
        case 0x3b0940u: goto label_3b0940;
        case 0x3b0944u: goto label_3b0944;
        case 0x3b0948u: goto label_3b0948;
        case 0x3b094cu: goto label_3b094c;
        case 0x3b0950u: goto label_3b0950;
        case 0x3b0954u: goto label_3b0954;
        case 0x3b0958u: goto label_3b0958;
        case 0x3b095cu: goto label_3b095c;
        case 0x3b0960u: goto label_3b0960;
        case 0x3b0964u: goto label_3b0964;
        case 0x3b0968u: goto label_3b0968;
        case 0x3b096cu: goto label_3b096c;
        case 0x3b0970u: goto label_3b0970;
        case 0x3b0974u: goto label_3b0974;
        case 0x3b0978u: goto label_3b0978;
        case 0x3b097cu: goto label_3b097c;
        case 0x3b0980u: goto label_3b0980;
        case 0x3b0984u: goto label_3b0984;
        case 0x3b0988u: goto label_3b0988;
        case 0x3b098cu: goto label_3b098c;
        default: break;
    }

    ctx->pc = 0x3b0900u;

label_3b0900:
    // 0x3b0900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b0904:
    // 0x3b0904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b0904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b0908:
    // 0x3b0908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b090c:
    // 0x3b090c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b090cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0910:
    // 0x3b0910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b0914:
    // 0x3b0914: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b0914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0918:
    // 0x3b0918: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b091c:
    // 0x3b091c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0920:
    // 0x3b0920: 0x40f809  jalr        $v0
label_3b0924:
    if (ctx->pc == 0x3B0924u) {
        ctx->pc = 0x3B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0920u;
        // 0x3b0924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0928u;
        goto label_3b0928;
    }
    ctx->pc = 0x3B0920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0928u);
        ctx->pc = 0x3B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0920u;
        // 0x3b0924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0920u, 0x3B0928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0928u;
label_3b0928:
    // 0x3b0928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b092c:
    // 0x3b092c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0930:
    // 0x3b0930: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b0934:
    // 0x3b0934: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_3b0938:
    if (ctx->pc == 0x3B0938u) {
        ctx->pc = 0x3B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0934u;
        // 0x3b0938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B093Cu;
        goto label_3b093c;
    }
    ctx->pc = 0x3B0934u;
    {
        const bool branch_taken_0x3b0934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0934u;
        // 0x3b0938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0934) {
            ctx->pc = 0x3B097Cu;
            goto label_3b097c;
        }
    }
    ctx->pc = 0x3B093Cu;
label_3b093c:
    // 0x3b093c: 0x920200b0  lbu         $v0, 0xB0($s0)
    ctx->pc = 0x3b093cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
label_3b0940:
    // 0x3b0940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b0944:
    if (ctx->pc == 0x3B0944u) {
        ctx->pc = 0x3B0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0940u;
        // 0x3b0944: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0948u;
        goto label_3b0948;
    }
    ctx->pc = 0x3B0940u;
    {
        const bool branch_taken_0x3b0940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0940u;
        // 0x3b0944: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0940) {
            ctx->pc = 0x3B0950u;
            goto label_3b0950;
        }
    }
    ctx->pc = 0x3B0948u;
label_3b0948:
    // 0x3b0948: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b094c:
    if (ctx->pc == 0x3B094Cu) {
        ctx->pc = 0x3B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0948u;
        // 0x3b094c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0950u;
        goto label_3b0950;
    }
    ctx->pc = 0x3B0948u;
    {
        const bool branch_taken_0x3b0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0948u;
        // 0x3b094c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0948) {
            ctx->pc = 0x3B097Cu;
            goto label_3b097c;
        }
    }
    ctx->pc = 0x3B0950u;
label_3b0950:
    // 0x3b0950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0954:
    // 0x3b0954: 0x34a5002e  ori         $a1, $a1, 0x2E
    ctx->pc = 0x3b0954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46);
label_3b0958:
    // 0x3b0958: 0xc0e6ec6  jal         func_39BB18
label_3b095c:
    if (ctx->pc == 0x3B095Cu) {
        ctx->pc = 0x3B095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0958u;
        // 0x3b095c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0960u;
        goto label_3b0960;
    }
    ctx->pc = 0x3B0958u;
    SET_GPR_U32(ctx, 31, 0x3B0960u);
    ctx->pc = 0x3B095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0958u;
    // 0x3b095c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3B0958u, 0x3B0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0960u;
label_3b0960:
    // 0x3b0960: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b0960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b0964:
    // 0x3b0964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0968:
    // 0x3b0968: 0x2484fffa  addiu       $a0, $a0, -0x6
    ctx->pc = 0x3b0968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
label_3b096c:
    // 0x3b096c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x3b096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_3b0970:
    // 0x3b0970: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0974:
    // 0x3b0974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b0978:
    // 0x3b0978: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b0978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b097c:
    // 0x3b097c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b097cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0980:
    // 0x3b0980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b0980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0984:
    // 0x3b0984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0988:
    // 0x3b0988: 0x3e00008  jr          $ra
label_3b098c:
    if (ctx->pc == 0x3B098Cu) {
        ctx->pc = 0x3B098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0988u;
        // 0x3b098c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0990u;
        goto label_fallthrough_0x3b0988;
    }
    ctx->pc = 0x3B0988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0988u;
        // 0x3b098c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0988:
    ctx->pc = 0x3B0990u;
}
