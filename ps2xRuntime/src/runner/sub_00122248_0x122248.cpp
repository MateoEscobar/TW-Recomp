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

// Function: sub_00122248
// Address: 0x122248 - 0x1222b0
void sub_00122248_0x122248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122248_0x122248");
#endif

    switch (ctx->pc) {
        case 0x122248u: goto label_122248;
        case 0x12224cu: goto label_12224c;
        case 0x122250u: goto label_122250;
        case 0x122254u: goto label_122254;
        case 0x122258u: goto label_122258;
        case 0x12225cu: goto label_12225c;
        case 0x122260u: goto label_122260;
        case 0x122264u: goto label_122264;
        case 0x122268u: goto label_122268;
        case 0x12226cu: goto label_12226c;
        case 0x122270u: goto label_122270;
        case 0x122274u: goto label_122274;
        case 0x122278u: goto label_122278;
        case 0x12227cu: goto label_12227c;
        case 0x122280u: goto label_122280;
        case 0x122284u: goto label_122284;
        case 0x122288u: goto label_122288;
        case 0x12228cu: goto label_12228c;
        case 0x122290u: goto label_122290;
        case 0x122294u: goto label_122294;
        case 0x122298u: goto label_122298;
        case 0x12229cu: goto label_12229c;
        case 0x1222a0u: goto label_1222a0;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222a8u: goto label_1222a8;
        case 0x1222acu: goto label_1222ac;
        default: break;
    }

    ctx->pc = 0x122248u;

label_122248:
    // 0x122248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12224c:
    // 0x12224c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12224cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122250:
    // 0x122250: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_122254:
    if (ctx->pc == 0x122254u) {
        ctx->pc = 0x122254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122250u;
        // 0x122254: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122258u;
        goto label_122258;
    }
    ctx->pc = 0x122250u;
    {
        const bool branch_taken_0x122250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122250u;
        // 0x122254: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122250) {
            ctx->pc = 0x12229Cu;
            goto label_12229c;
        }
    }
    ctx->pc = 0x122258u;
label_122258:
    // 0x122258: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x122258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12225c:
    // 0x12225c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x12225cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_122260:
    // 0x122260: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_122264:
    // 0x122264: 0x40f809  jalr        $v0
label_122268:
    if (ctx->pc == 0x122268u) {
        ctx->pc = 0x122268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122264u;
        // 0x122268: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12226Cu;
        goto label_12226c;
    }
    ctx->pc = 0x122264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12226Cu);
        ctx->pc = 0x122268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122264u;
        // 0x122268: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122264u, 0x12226Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12226Cu;
label_12226c:
    // 0x12226c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12226cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_122270:
    // 0x122270: 0xc0e4060  jal         func_390180
label_122274:
    if (ctx->pc == 0x122274u) {
        ctx->pc = 0x122274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122270u;
        // 0x122274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122278u;
        goto label_122278;
    }
    ctx->pc = 0x122270u;
    SET_GPR_U32(ctx, 31, 0x122278u);
    ctx->pc = 0x122274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122270u;
    // 0x122274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x122270u, 0x122278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122278u;
label_122278:
    // 0x122278: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12227c:
    if (ctx->pc == 0x12227Cu) {
        ctx->pc = 0x12227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122278u;
        // 0x12227c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122280u;
        goto label_122280;
    }
    ctx->pc = 0x122278u;
    {
        const bool branch_taken_0x122278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122278u;
        // 0x12227c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122278) {
            ctx->pc = 0x12229Cu;
            goto label_12229c;
        }
    }
    ctx->pc = 0x122280u;
label_122280:
    // 0x122280: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122284:
    // 0x122284: 0xc136b98  jal         func_4DAE60
label_122288:
    if (ctx->pc == 0x122288u) {
        ctx->pc = 0x122288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122284u;
        // 0x122288: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12228Cu;
        goto label_12228c;
    }
    ctx->pc = 0x122284u;
    SET_GPR_U32(ctx, 31, 0x12228Cu);
    ctx->pc = 0x122288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122284u;
    // 0x122288: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE60u, 0x122284u, 0x12228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12228Cu;
label_12228c:
    // 0x12228c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122290:
    // 0x122290: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x122290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122294:
    // 0x122294: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_122298:
    if (ctx->pc == 0x122298u) {
        ctx->pc = 0x122298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122294u;
        // 0x122298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12229Cu;
        goto label_12229c;
    }
    ctx->pc = 0x122294u;
    {
        const bool branch_taken_0x122294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x122298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122294u;
        // 0x122298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122294) {
            ctx->pc = 0x1222A0u;
            goto label_1222a0;
        }
    }
    ctx->pc = 0x12229Cu;
label_12229c:
    // 0x12229c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12229cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1222a0:
    // 0x1222a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1222a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1222a4:
    // 0x1222a4: 0x3e00008  jr          $ra
label_1222a8:
    if (ctx->pc == 0x1222A8u) {
        ctx->pc = 0x1222A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222A4u;
        // 0x1222a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222ACu;
        goto label_1222ac;
    }
    ctx->pc = 0x1222A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1222A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222A4u;
        // 0x1222a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1222A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1222ACu;
label_1222ac:
    // 0x1222ac: 0x0  nop
    ctx->pc = 0x1222acu;
    // NOP
    ctx->pc = 0x1222b0u;
}
