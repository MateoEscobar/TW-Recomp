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

// Function: sub_0028F928
// Address: 0x28f928 - 0x28f988
void sub_0028F928_0x28f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F928_0x28f928");
#endif

    switch (ctx->pc) {
        case 0x28f928u: goto label_28f928;
        case 0x28f92cu: goto label_28f92c;
        case 0x28f930u: goto label_28f930;
        case 0x28f934u: goto label_28f934;
        case 0x28f938u: goto label_28f938;
        case 0x28f93cu: goto label_28f93c;
        case 0x28f940u: goto label_28f940;
        case 0x28f944u: goto label_28f944;
        case 0x28f948u: goto label_28f948;
        case 0x28f94cu: goto label_28f94c;
        case 0x28f950u: goto label_28f950;
        case 0x28f954u: goto label_28f954;
        case 0x28f958u: goto label_28f958;
        case 0x28f95cu: goto label_28f95c;
        case 0x28f960u: goto label_28f960;
        case 0x28f964u: goto label_28f964;
        case 0x28f968u: goto label_28f968;
        case 0x28f96cu: goto label_28f96c;
        case 0x28f970u: goto label_28f970;
        case 0x28f974u: goto label_28f974;
        case 0x28f978u: goto label_28f978;
        case 0x28f97cu: goto label_28f97c;
        case 0x28f980u: goto label_28f980;
        case 0x28f984u: goto label_28f984;
        default: break;
    }

    ctx->pc = 0x28f928u;

label_28f928:
    // 0x28f928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28f92c:
    // 0x28f92c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28f930:
    // 0x28f930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28f934:
    // 0x28f934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f938:
    // 0x28f938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28f93c:
    // 0x28f93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28f940:
    // 0x28f940: 0xc0a6440  jal         func_299100
label_28f944:
    if (ctx->pc == 0x28F944u) {
        ctx->pc = 0x28F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F940u;
        // 0x28f944: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F948u;
        goto label_28f948;
    }
    ctx->pc = 0x28F940u;
    SET_GPR_U32(ctx, 31, 0x28F948u);
    ctx->pc = 0x28F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F940u;
    // 0x28f944: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299100u, 0x28F940u, 0x28F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F948u;
label_28f948:
    // 0x28f948: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x28f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_28f94c:
    // 0x28f94c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_28f950:
    if (ctx->pc == 0x28F950u) {
        ctx->pc = 0x28F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F94Cu;
        // 0x28f950: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F954u;
        goto label_28f954;
    }
    ctx->pc = 0x28F94Cu;
    {
        const bool branch_taken_0x28f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f94c) {
            ctx->pc = 0x28F950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F94Cu;
            // 0x28f950: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F964u;
            goto label_28f964;
        }
    }
    ctx->pc = 0x28F954u;
label_28f954:
    // 0x28f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f958:
    // 0x28f958: 0xc0a3e62  jal         func_28F988
label_28f95c:
    if (ctx->pc == 0x28F95Cu) {
        ctx->pc = 0x28F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F958u;
        // 0x28f95c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F960u;
        goto label_28f960;
    }
    ctx->pc = 0x28F958u;
    SET_GPR_U32(ctx, 31, 0x28F960u);
    ctx->pc = 0x28F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F958u;
    // 0x28f95c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F988u, 0x28F958u, 0x28F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F960u;
label_28f960:
    // 0x28f960: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x28f960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_28f964:
    // 0x28f964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f968:
    // 0x28f968: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x28f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_28f96c:
    // 0x28f96c: 0x40f809  jalr        $v0
label_28f970:
    if (ctx->pc == 0x28F970u) {
        ctx->pc = 0x28F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F96Cu;
        // 0x28f970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F974u;
        goto label_28f974;
    }
    ctx->pc = 0x28F96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F974u);
        ctx->pc = 0x28F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F96Cu;
        // 0x28f970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F96Cu, 0x28F974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F974u;
label_28f974:
    // 0x28f974: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28f974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28f978:
    // 0x28f978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f97c:
    // 0x28f97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f980:
    // 0x28f980: 0x3e00008  jr          $ra
label_28f984:
    if (ctx->pc == 0x28F984u) {
        ctx->pc = 0x28F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F980u;
        // 0x28f984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F988u;
        goto label_fallthrough_0x28f980;
    }
    ctx->pc = 0x28F980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F980u;
        // 0x28f984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f980:
    ctx->pc = 0x28F988u;
}
