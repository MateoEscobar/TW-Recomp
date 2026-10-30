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

// Function: sub_00152208
// Address: 0x152208 - 0x1522b8
void sub_00152208_0x152208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152208_0x152208");
#endif

    switch (ctx->pc) {
        case 0x15224cu: goto label_15224c;
        case 0x152298u: goto label_152298;
        case 0x1522a8u: goto label_1522a8;
        default: break;
    }

    ctx->pc = 0x152208u;

    // 0x152208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15220c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152210: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x152210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x152214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152218: 0x8e03c5d8  lw          $v1, -0x3A28($s0)
    ctx->pc = 0x152218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x15221c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15221Cu;
    {
        const bool branch_taken_0x15221c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15221Cu;
        // 0x152220: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15221c) {
            ctx->pc = 0x152238u;
            goto label_152238;
        }
    }
    ctx->pc = 0x152224u;
    // 0x152224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152228: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x152228u;
    {
        const bool branch_taken_0x152228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152228u;
        // 0x15222c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152228) {
            ctx->pc = 0x152274u;
            goto label_152274;
        }
    }
    ctx->pc = 0x152230u;
    // 0x152230: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x152230u;
    {
        const bool branch_taken_0x152230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152230u;
        // 0x152234: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152230) {
            ctx->pc = 0x1522B0u;
            goto label_1522b0;
        }
    }
    ctx->pc = 0x152238u;
label_152238:
    // 0x152238: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15223c: 0x24434668  addiu       $v1, $v0, 0x4668
    ctx->pc = 0x15223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
    // 0x152240: 0x8c444668  lw          $a0, 0x4668($v0)
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E4668u));
    // 0x152244: 0xc111700  jal         func_445C00
    ctx->pc = 0x152244u;
    SET_GPR_U32(ctx, 31, 0x15224Cu);
    ctx->pc = 0x152248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152244u;
    // 0x152248: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C00u, 0x152244u, 0x15224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15224Cu;
label_15224c:
    // 0x15224c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15224cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152250: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152250u;
    {
        const bool branch_taken_0x152250 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152250u;
        // 0x152254: 0x8e02c5d8  lw          $v0, -0x3A28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152250) {
            ctx->pc = 0x152268u;
            goto label_152268;
        }
    }
    ctx->pc = 0x152258u;
    // 0x152258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15225c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152260u;
    {
        const bool branch_taken_0x152260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152260u;
        // 0x152264: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152260) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x152268u;
label_152268:
    // 0x152268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15226c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15226Cu;
    {
        const bool branch_taken_0x15226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15226Cu;
        // 0x152270: 0xae02c5d8  sw          $v0, -0x3A28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15226c) {
            ctx->pc = 0x1522A8u;
            goto label_1522a8;
        }
    }
    ctx->pc = 0x152274u;
label_152274:
    // 0x152274: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152274u;
    {
        const bool branch_taken_0x152274 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x152278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152274u;
        // 0x152278: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152274) {
            ctx->pc = 0x1522B0u;
            goto label_1522b0;
        }
    }
    ctx->pc = 0x15227Cu;
    // 0x15227c: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15227Cu;
    {
        const bool branch_taken_0x15227c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x15227c) {
            ctx->pc = 0x152280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15227Cu;
            // 0x152280: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1522A0u;
            goto label_1522a0;
        }
    }
    ctx->pc = 0x152284u;
    // 0x152284: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152288: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15228c: 0xac44c5ec  sw          $a0, -0x3A14($v0)
    ctx->pc = 0x15228cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
label_152290:
    // 0x152290: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152290u;
    SET_GPR_U32(ctx, 31, 0x152298u);
    ctx->pc = 0x152294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152290u;
    // 0x152294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152290u, 0x152298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152298u;
label_152298:
    // 0x152298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152298u;
    {
        const bool branch_taken_0x152298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152298u;
        // 0x15229c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152298) {
            ctx->pc = 0x1522ACu;
            goto label_1522ac;
        }
    }
    ctx->pc = 0x1522A0u;
label_1522a0:
    // 0x1522a0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1522A0u;
    SET_GPR_U32(ctx, 31, 0x1522A8u);
    ctx->pc = 0x1522A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522A0u;
    // 0x1522a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1522A0u, 0x1522A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522A8u;
label_1522a8:
    // 0x1522a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1522a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1522ac:
    // 0x1522ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1522acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1522b0:
    // 0x1522b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1522B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1522B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522B0u;
        // 0x1522b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1522B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1522B8u;
}
