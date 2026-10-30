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

// Function: sub_0015A900
// Address: 0x15a900 - 0x15a998
void sub_0015A900_0x15a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A900_0x15a900");
#endif

    switch (ctx->pc) {
        case 0x15a900u: goto label_15a900;
        case 0x15a904u: goto label_15a904;
        case 0x15a908u: goto label_15a908;
        case 0x15a90cu: goto label_15a90c;
        case 0x15a910u: goto label_15a910;
        case 0x15a914u: goto label_15a914;
        case 0x15a918u: goto label_15a918;
        case 0x15a91cu: goto label_15a91c;
        case 0x15a920u: goto label_15a920;
        case 0x15a924u: goto label_15a924;
        case 0x15a928u: goto label_15a928;
        case 0x15a92cu: goto label_15a92c;
        case 0x15a930u: goto label_15a930;
        case 0x15a934u: goto label_15a934;
        case 0x15a938u: goto label_15a938;
        case 0x15a93cu: goto label_15a93c;
        case 0x15a940u: goto label_15a940;
        case 0x15a944u: goto label_15a944;
        case 0x15a948u: goto label_15a948;
        case 0x15a94cu: goto label_15a94c;
        case 0x15a950u: goto label_15a950;
        case 0x15a954u: goto label_15a954;
        case 0x15a958u: goto label_15a958;
        case 0x15a95cu: goto label_15a95c;
        case 0x15a960u: goto label_15a960;
        case 0x15a964u: goto label_15a964;
        case 0x15a968u: goto label_15a968;
        case 0x15a96cu: goto label_15a96c;
        case 0x15a970u: goto label_15a970;
        case 0x15a974u: goto label_15a974;
        case 0x15a978u: goto label_15a978;
        case 0x15a97cu: goto label_15a97c;
        case 0x15a980u: goto label_15a980;
        case 0x15a984u: goto label_15a984;
        case 0x15a988u: goto label_15a988;
        case 0x15a98cu: goto label_15a98c;
        case 0x15a990u: goto label_15a990;
        case 0x15a994u: goto label_15a994;
        default: break;
    }

    ctx->pc = 0x15a900u;

label_15a900:
    // 0x15a900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15a904:
    // 0x15a904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15a908:
    // 0x15a908: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15a908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15a90c:
    // 0x15a90c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15a910:
    // 0x15a910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15a914:
    // 0x15a914: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15a918:
    // 0x15a918: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15a91c:
    // 0x15a91c: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x15a91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_15a920:
    // 0x15a920: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x15a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_15a924:
    // 0x15a924: 0x40f809  jalr        $v0
label_15a928:
    if (ctx->pc == 0x15A928u) {
        ctx->pc = 0x15A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A924u;
        // 0x15a928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A92Cu;
        goto label_15a92c;
    }
    ctx->pc = 0x15A924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A92Cu);
        ctx->pc = 0x15A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A924u;
        // 0x15a928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A924u, 0x15A92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A92Cu;
label_15a92c:
    // 0x15a92c: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15a930:
    // 0x15a930: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a934:
    // 0x15a934: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15a938:
    // 0x15a938: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_15a93c:
    // 0x15a93c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_15a940:
    // 0x15a940: 0x40f809  jalr        $v0
label_15a944:
    if (ctx->pc == 0x15A944u) {
        ctx->pc = 0x15A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A940u;
        // 0x15a944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A948u;
        goto label_15a948;
    }
    ctx->pc = 0x15A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A948u);
        ctx->pc = 0x15A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A940u;
        // 0x15a944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A940u, 0x15A948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A948u;
label_15a948:
    // 0x15a948: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15a94c:
    if (ctx->pc == 0x15A94Cu) {
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A950u;
        goto label_15a950;
    }
    ctx->pc = 0x15A948u;
    {
        const bool branch_taken_0x15a948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a948) {
            ctx->pc = 0x15A95Cu;
            goto label_15a95c;
        }
    }
    ctx->pc = 0x15A950u;
label_15a950:
    // 0x15a950: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a954:
    // 0x15a954: 0x10000009  b           . + 4 + (0x9 << 2)
label_15a958:
    if (ctx->pc == 0x15A958u) {
        ctx->pc = 0x15A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A954u;
        // 0x15a958: 0x2442a2b0  addiu       $v0, $v0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A95Cu;
        goto label_15a95c;
    }
    ctx->pc = 0x15A954u;
    {
        const bool branch_taken_0x15a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A954u;
        // 0x15a958: 0x2442a2b0  addiu       $v0, $v0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a954) {
            ctx->pc = 0x15A97Cu;
            goto label_15a97c;
        }
    }
    ctx->pc = 0x15A95Cu;
label_15a95c:
    // 0x15a95c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_15a960:
    if (ctx->pc == 0x15A960u) {
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A964u;
        goto label_15a964;
    }
    ctx->pc = 0x15A95Cu;
    {
        const bool branch_taken_0x15a95c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a95c) {
            ctx->pc = 0x15A970u;
            goto label_15a970;
        }
    }
    ctx->pc = 0x15A964u;
label_15a964:
    // 0x15a964: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a968:
    // 0x15a968: 0x10000004  b           . + 4 + (0x4 << 2)
label_15a96c:
    if (ctx->pc == 0x15A96Cu) {
        ctx->pc = 0x15A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A968u;
        // 0x15a96c: 0x2442a9f0  addiu       $v0, $v0, -0x5610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A970u;
        goto label_15a970;
    }
    ctx->pc = 0x15A968u;
    {
        const bool branch_taken_0x15a968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A968u;
        // 0x15a96c: 0x2442a9f0  addiu       $v0, $v0, -0x5610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a968) {
            ctx->pc = 0x15A97Cu;
            goto label_15a97c;
        }
    }
    ctx->pc = 0x15A970u;
label_15a970:
    // 0x15a970: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15a974:
    // 0x15a974: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a978:
    // 0x15a978: 0x2442a998  addiu       $v0, $v0, -0x5668
    ctx->pc = 0x15a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945176));
label_15a97c:
    // 0x15a97c: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15a980:
    // 0x15a980: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15a980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15a984:
    // 0x15a984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15a988:
    // 0x15a988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a98c:
    // 0x15a98c: 0x3e00008  jr          $ra
label_15a990:
    if (ctx->pc == 0x15A990u) {
        ctx->pc = 0x15A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A98Cu;
        // 0x15a990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A994u;
        goto label_15a994;
    }
    ctx->pc = 0x15A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A98Cu;
        // 0x15a990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A994u;
label_15a994:
    // 0x15a994: 0x0  nop
    ctx->pc = 0x15a994u;
    // NOP
    ctx->pc = 0x15a998u;
}
