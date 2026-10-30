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

// Function: sub_00221950
// Address: 0x221950 - 0x2219b8
void sub_00221950_0x221950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221950_0x221950");
#endif

    switch (ctx->pc) {
        case 0x221950u: goto label_221950;
        case 0x221954u: goto label_221954;
        case 0x221958u: goto label_221958;
        case 0x22195cu: goto label_22195c;
        case 0x221960u: goto label_221960;
        case 0x221964u: goto label_221964;
        case 0x221968u: goto label_221968;
        case 0x22196cu: goto label_22196c;
        case 0x221970u: goto label_221970;
        case 0x221974u: goto label_221974;
        case 0x221978u: goto label_221978;
        case 0x22197cu: goto label_22197c;
        case 0x221980u: goto label_221980;
        case 0x221984u: goto label_221984;
        case 0x221988u: goto label_221988;
        case 0x22198cu: goto label_22198c;
        case 0x221990u: goto label_221990;
        case 0x221994u: goto label_221994;
        case 0x221998u: goto label_221998;
        case 0x22199cu: goto label_22199c;
        case 0x2219a0u: goto label_2219a0;
        case 0x2219a4u: goto label_2219a4;
        case 0x2219a8u: goto label_2219a8;
        case 0x2219acu: goto label_2219ac;
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b4u: goto label_2219b4;
        default: break;
    }

    ctx->pc = 0x221950u;

label_221950:
    // 0x221950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_221954:
    // 0x221954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_221958:
    // 0x221958: 0xc0579c6  jal         func_15E718
label_22195c:
    if (ctx->pc == 0x22195Cu) {
        ctx->pc = 0x221960u;
        goto label_221960;
    }
    ctx->pc = 0x221958u;
    SET_GPR_U32(ctx, 31, 0x221960u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x221958u, 0x221960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221960u;
label_221960:
    // 0x221960: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_221964:
    // 0x221964: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x221964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_221968:
    // 0x221968: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x221968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_22196c:
    // 0x22196c: 0xa0f809  jalr        $a1
label_221970:
    if (ctx->pc == 0x221970u) {
        ctx->pc = 0x221970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22196Cu;
        // 0x221970: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221974u;
        goto label_221974;
    }
    ctx->pc = 0x22196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x221974u);
        ctx->pc = 0x221970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22196Cu;
        // 0x221970: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22196Cu, 0x221974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221974u;
label_221974:
    // 0x221974: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x221974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221978:
    // 0x221978: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22197c:
    // 0x22197c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_221980:
    if (ctx->pc == 0x221980u) {
        ctx->pc = 0x221980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22197Cu;
        // 0x221980: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x221984u;
        goto label_221984;
    }
    ctx->pc = 0x22197Cu;
    {
        const bool branch_taken_0x22197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x221980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22197Cu;
        // 0x221980: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22197c) {
            ctx->pc = 0x2219A8u;
            goto label_2219a8;
        }
    }
    ctx->pc = 0x221984u;
label_221984:
    // 0x221984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_221988:
    if (ctx->pc == 0x221988u) {
        ctx->pc = 0x221988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221984u;
        // 0x221988: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22198Cu;
        goto label_22198c;
    }
    ctx->pc = 0x221984u;
    {
        const bool branch_taken_0x221984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221984u;
        // 0x221988: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221984) {
            ctx->pc = 0x22199Cu;
            goto label_22199c;
        }
    }
    ctx->pc = 0x22198Cu;
label_22198c:
    // 0x22198c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_221990:
    if (ctx->pc == 0x221990u) {
        ctx->pc = 0x221990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22198Cu;
        // 0x221990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221994u;
        goto label_221994;
    }
    ctx->pc = 0x22198Cu;
    {
        const bool branch_taken_0x22198c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x221990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22198Cu;
        // 0x221990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22198c) {
            ctx->pc = 0x2219A8u;
            goto label_2219a8;
        }
    }
    ctx->pc = 0x221994u;
label_221994:
    // 0x221994: 0x10000006  b           . + 4 + (0x6 << 2)
label_221998:
    if (ctx->pc == 0x221998u) {
        ctx->pc = 0x221998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221994u;
        // 0x221998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22199Cu;
        goto label_22199c;
    }
    ctx->pc = 0x221994u;
    {
        const bool branch_taken_0x221994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221994u;
        // 0x221998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221994) {
            ctx->pc = 0x2219B0u;
            goto label_2219b0;
        }
    }
    ctx->pc = 0x22199Cu;
label_22199c:
    // 0x22199c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x22199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2219a0:
    // 0x2219a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2219a4:
    if (ctx->pc == 0x2219A4u) {
        ctx->pc = 0x2219A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A0u;
        // 0x2219a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219A8u;
        goto label_2219a8;
    }
    ctx->pc = 0x2219A0u;
    {
        const bool branch_taken_0x2219a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2219A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A0u;
        // 0x2219a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219a0) {
            ctx->pc = 0x2219ACu;
            goto label_2219ac;
        }
    }
    ctx->pc = 0x2219A8u;
label_2219a8:
    // 0x2219a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2219a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2219ac:
    // 0x2219ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2219acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2219b0:
    // 0x2219b0: 0x3e00008  jr          $ra
label_2219b4:
    if (ctx->pc == 0x2219B4u) {
        ctx->pc = 0x2219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B0u;
        // 0x2219b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219B8u;
        goto label_fallthrough_0x2219b0;
    }
    ctx->pc = 0x2219B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B0u;
        // 0x2219b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2219b0:
    ctx->pc = 0x2219B8u;
}
