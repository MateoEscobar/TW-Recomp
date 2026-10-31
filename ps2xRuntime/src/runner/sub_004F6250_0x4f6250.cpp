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

// Function: sub_004F6250
// Address: 0x4f6250 - 0x4f62c0
void sub_004F6250_0x4f6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6250_0x4f6250");
#endif

    switch (ctx->pc) {
        case 0x4f6250u: goto label_4f6250;
        case 0x4f6254u: goto label_4f6254;
        case 0x4f6258u: goto label_4f6258;
        case 0x4f625cu: goto label_4f625c;
        case 0x4f6260u: goto label_4f6260;
        case 0x4f6264u: goto label_4f6264;
        case 0x4f6268u: goto label_4f6268;
        case 0x4f626cu: goto label_4f626c;
        case 0x4f6270u: goto label_4f6270;
        case 0x4f6274u: goto label_4f6274;
        case 0x4f6278u: goto label_4f6278;
        case 0x4f627cu: goto label_4f627c;
        case 0x4f6280u: goto label_4f6280;
        case 0x4f6284u: goto label_4f6284;
        case 0x4f6288u: goto label_4f6288;
        case 0x4f628cu: goto label_4f628c;
        case 0x4f6290u: goto label_4f6290;
        case 0x4f6294u: goto label_4f6294;
        case 0x4f6298u: goto label_4f6298;
        case 0x4f629cu: goto label_4f629c;
        case 0x4f62a0u: goto label_4f62a0;
        case 0x4f62a4u: goto label_4f62a4;
        case 0x4f62a8u: goto label_4f62a8;
        case 0x4f62acu: goto label_4f62ac;
        case 0x4f62b0u: goto label_4f62b0;
        case 0x4f62b4u: goto label_4f62b4;
        case 0x4f62b8u: goto label_4f62b8;
        case 0x4f62bcu: goto label_4f62bc;
        default: break;
    }

    ctx->pc = 0x4f6250u;

label_4f6250:
    // 0x4f6250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f6254:
    // 0x4f6254: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f6258:
    // 0x4f6258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f625c:
    // 0x4f625c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f625cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f6260:
    // 0x4f6260: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f6264:
    // 0x4f6264: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f6264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f6268:
    // 0x4f6268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f626c:
    // 0x4f626c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f6270:
    if (ctx->pc == 0x4F6270u) {
        ctx->pc = 0x4F6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F626Cu;
        // 0x4f6270: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6274u;
        goto label_4f6274;
    }
    ctx->pc = 0x4F626Cu;
    {
        const bool branch_taken_0x4f626c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F626Cu;
        // 0x4f6270: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f626c) {
            ctx->pc = 0x4F62A4u;
            goto label_4f62a4;
        }
    }
    ctx->pc = 0x4F6274u;
label_4f6274:
    // 0x4f6274: 0xc1055b4  jal         func_4156D0
label_4f6278:
    if (ctx->pc == 0x4F6278u) {
        ctx->pc = 0x4F6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6274u;
        // 0x4f6278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F627Cu;
        goto label_4f627c;
    }
    ctx->pc = 0x4F6274u;
    SET_GPR_U32(ctx, 31, 0x4F627Cu);
    ctx->pc = 0x4F6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6274u;
    // 0x4f6278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4156D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4156D0u, 0x4F6274u, 0x4F627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F627Cu;
label_4f627c:
    // 0x4f627c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f6280:
    // 0x4f6280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f6280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f6284:
    // 0x4f6284: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f6284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f6288:
    // 0x4f6288: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f6288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f628c:
    // 0x4f628c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f628cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f6290:
    // 0x4f6290: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f6290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f6294:
    // 0x4f6294: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f6294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6298:
    // 0x4f6298: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f629c:
    // 0x4f629c: 0x60f809  jalr        $v1
label_4f62a0:
    if (ctx->pc == 0x4F62A0u) {
        ctx->pc = 0x4F62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F629Cu;
        // 0x4f62a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F62A4u;
        goto label_4f62a4;
    }
    ctx->pc = 0x4F629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F62A4u);
        ctx->pc = 0x4F62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F629Cu;
        // 0x4f62a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F629Cu, 0x4F62A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F62A4u;
label_4f62a4:
    // 0x4f62a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f62a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f62a8:
    // 0x4f62a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f62a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f62ac:
    // 0x4f62ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f62acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f62b0:
    // 0x4f62b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f62b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f62b4:
    // 0x4f62b4: 0x3e00008  jr          $ra
label_4f62b8:
    if (ctx->pc == 0x4F62B8u) {
        ctx->pc = 0x4F62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F62B4u;
        // 0x4f62b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F62BCu;
        goto label_4f62bc;
    }
    ctx->pc = 0x4F62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F62B4u;
        // 0x4f62b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F62B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F62BCu;
label_4f62bc:
    // 0x4f62bc: 0x0  nop
    ctx->pc = 0x4f62bcu;
    // NOP
    ctx->pc = 0x4f62c0u;
}
