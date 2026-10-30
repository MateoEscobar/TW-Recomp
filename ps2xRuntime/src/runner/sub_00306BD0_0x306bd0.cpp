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

// Function: sub_00306BD0
// Address: 0x306bd0 - 0x306c28
void sub_00306BD0_0x306bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306BD0_0x306bd0");
#endif

    switch (ctx->pc) {
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        default: break;
    }

    ctx->pc = 0x306bd0u;

label_306bd0:
    // 0x306bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_306bd4:
    // 0x306bd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x306bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_306bd8:
    // 0x306bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306bdc:
    // 0x306bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306be0:
    // 0x306be0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x306be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_306be4:
    // 0x306be4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_306be8:
    if (ctx->pc == 0x306BE8u) {
        ctx->pc = 0x306BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BE4u;
        // 0x306be8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BECu;
        goto label_306bec;
    }
    ctx->pc = 0x306BE4u;
    {
        const bool branch_taken_0x306be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306be4) {
            ctx->pc = 0x306BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306BE4u;
            // 0x306be8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306C18u;
            goto label_306c18;
        }
    }
    ctx->pc = 0x306BECu;
label_306bec:
    // 0x306bec: 0xc0c869c  jal         func_321A70
label_306bf0:
    if (ctx->pc == 0x306BF0u) {
        ctx->pc = 0x306BF4u;
        goto label_306bf4;
    }
    ctx->pc = 0x306BECu;
    SET_GPR_U32(ctx, 31, 0x306BF4u);
    ctx->pc = 0x321A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321A70u, 0x306BECu, 0x306BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BF4u;
label_306bf4:
    // 0x306bf4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_306bf8:
    // 0x306bf8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x306bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_306bfc:
    // 0x306bfc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x306bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_306c00:
    // 0x306c00: 0x60f809  jalr        $v1
label_306c04:
    if (ctx->pc == 0x306C04u) {
        ctx->pc = 0x306C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C00u;
        // 0x306c04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C08u;
        goto label_306c08;
    }
    ctx->pc = 0x306C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x306C08u);
        ctx->pc = 0x306C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C00u;
        // 0x306c04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C00u, 0x306C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306C08u;
label_306c08:
    // 0x306c08: 0xc0c8624  jal         func_321890
label_306c0c:
    if (ctx->pc == 0x306C0Cu) {
        ctx->pc = 0x306C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C08u;
        // 0x306c0c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C10u;
        goto label_306c10;
    }
    ctx->pc = 0x306C08u;
    SET_GPR_U32(ctx, 31, 0x306C10u);
    ctx->pc = 0x306C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C08u;
    // 0x306c0c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321890u, 0x306C08u, 0x306C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C10u;
label_306c10:
    // 0x306c10: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x306c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_306c14:
    // 0x306c14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x306c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306c18:
    // 0x306c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306c1c:
    // 0x306c1c: 0x3e00008  jr          $ra
label_306c20:
    if (ctx->pc == 0x306C20u) {
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C24u;
        goto label_306c24;
    }
    ctx->pc = 0x306C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306C24u;
label_306c24:
    // 0x306c24: 0x0  nop
    ctx->pc = 0x306c24u;
    // NOP
    ctx->pc = 0x306c28u;
}
