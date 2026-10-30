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

// Function: sub_00416258
// Address: 0x416258 - 0x4162d0
void sub_00416258_0x416258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416258_0x416258");
#endif

    switch (ctx->pc) {
        case 0x416258u: goto label_416258;
        case 0x41625cu: goto label_41625c;
        case 0x416260u: goto label_416260;
        case 0x416264u: goto label_416264;
        case 0x416268u: goto label_416268;
        case 0x41626cu: goto label_41626c;
        case 0x416270u: goto label_416270;
        case 0x416274u: goto label_416274;
        case 0x416278u: goto label_416278;
        case 0x41627cu: goto label_41627c;
        case 0x416280u: goto label_416280;
        case 0x416284u: goto label_416284;
        case 0x416288u: goto label_416288;
        case 0x41628cu: goto label_41628c;
        case 0x416290u: goto label_416290;
        case 0x416294u: goto label_416294;
        case 0x416298u: goto label_416298;
        case 0x41629cu: goto label_41629c;
        case 0x4162a0u: goto label_4162a0;
        case 0x4162a4u: goto label_4162a4;
        case 0x4162a8u: goto label_4162a8;
        case 0x4162acu: goto label_4162ac;
        case 0x4162b0u: goto label_4162b0;
        case 0x4162b4u: goto label_4162b4;
        case 0x4162b8u: goto label_4162b8;
        case 0x4162bcu: goto label_4162bc;
        case 0x4162c0u: goto label_4162c0;
        case 0x4162c4u: goto label_4162c4;
        case 0x4162c8u: goto label_4162c8;
        case 0x4162ccu: goto label_4162cc;
        default: break;
    }

    ctx->pc = 0x416258u;

label_416258:
    // 0x416258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x416258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41625c:
    // 0x41625c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_416260:
    // 0x416260: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x416260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_416264:
    // 0x416264: 0xc10586a  jal         func_4161A8
label_416268:
    if (ctx->pc == 0x416268u) {
        ctx->pc = 0x416268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416264u;
        // 0x416268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41626Cu;
        goto label_41626c;
    }
    ctx->pc = 0x416264u;
    SET_GPR_U32(ctx, 31, 0x41626Cu);
    ctx->pc = 0x416268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416264u;
    // 0x416268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161A8u, 0x416264u, 0x41626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41626Cu;
label_41626c:
    // 0x41626c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x41626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_416270:
    // 0x416270: 0xc0e4060  jal         func_390180
label_416274:
    if (ctx->pc == 0x416274u) {
        ctx->pc = 0x416274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416270u;
        // 0x416274: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416278u;
        goto label_416278;
    }
    ctx->pc = 0x416270u;
    SET_GPR_U32(ctx, 31, 0x416278u);
    ctx->pc = 0x416274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416270u;
    // 0x416274: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x416270u, 0x416278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416278u;
label_416278:
    // 0x416278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41627c:
    if (ctx->pc == 0x41627Cu) {
        ctx->pc = 0x416280u;
        goto label_416280;
    }
    ctx->pc = 0x416278u;
    {
        const bool branch_taken_0x416278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x416278) {
            ctx->pc = 0x416288u;
            goto label_416288;
        }
    }
    ctx->pc = 0x416280u;
label_416280:
    // 0x416280: 0x1000000e  b           . + 4 + (0xE << 2)
label_416284:
    if (ctx->pc == 0x416284u) {
        ctx->pc = 0x416284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416280u;
        // 0x416284: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x416288u;
        goto label_416288;
    }
    ctx->pc = 0x416280u;
    {
        const bool branch_taken_0x416280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416280u;
        // 0x416284: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416280) {
            ctx->pc = 0x4162BCu;
            goto label_4162bc;
        }
    }
    ctx->pc = 0x416288u;
label_416288:
    // 0x416288: 0xc10586a  jal         func_4161A8
label_41628c:
    if (ctx->pc == 0x41628Cu) {
        ctx->pc = 0x41628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416288u;
        // 0x41628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416290u;
        goto label_416290;
    }
    ctx->pc = 0x416288u;
    SET_GPR_U32(ctx, 31, 0x416290u);
    ctx->pc = 0x41628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416288u;
    // 0x41628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161A8u, 0x416288u, 0x416290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416290u;
label_416290:
    // 0x416290: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x416290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_416294:
    // 0x416294: 0xc0e4060  jal         func_390180
label_416298:
    if (ctx->pc == 0x416298u) {
        ctx->pc = 0x416298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416294u;
        // 0x416298: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41629Cu;
        goto label_41629c;
    }
    ctx->pc = 0x416294u;
    SET_GPR_U32(ctx, 31, 0x41629Cu);
    ctx->pc = 0x416298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416294u;
    // 0x416298: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x416294u, 0x41629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41629Cu;
label_41629c:
    // 0x41629c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4162a0:
    // 0x4162a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4162a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4162a4:
    // 0x4162a4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x4162a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_4162a8:
    // 0x4162a8: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x4162a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_4162ac:
    // 0x4162ac: 0xc0f809  jalr        $a2
label_4162b0:
    if (ctx->pc == 0x4162B0u) {
        ctx->pc = 0x4162B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162ACu;
        // 0x4162b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4162B4u;
        goto label_4162b4;
    }
    ctx->pc = 0x4162ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4162B4u);
        ctx->pc = 0x4162B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162ACu;
        // 0x4162b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4162ACu, 0x4162B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4162B4u;
label_4162b4:
    // 0x4162b4: 0xc0cd7d2  jal         func_335F48
label_4162b8:
    if (ctx->pc == 0x4162B8u) {
        ctx->pc = 0x4162B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162B4u;
        // 0x4162b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4162BCu;
        goto label_4162bc;
    }
    ctx->pc = 0x4162B4u;
    SET_GPR_U32(ctx, 31, 0x4162BCu);
    ctx->pc = 0x4162B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4162B4u;
    // 0x4162b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x4162B4u, 0x4162BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4162BCu;
label_4162bc:
    // 0x4162bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4162bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4162c0:
    // 0x4162c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4162c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4162c4:
    // 0x4162c4: 0x3e00008  jr          $ra
label_4162c8:
    if (ctx->pc == 0x4162C8u) {
        ctx->pc = 0x4162C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162C4u;
        // 0x4162c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4162CCu;
        goto label_4162cc;
    }
    ctx->pc = 0x4162C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4162C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162C4u;
        // 0x4162c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4162C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4162CCu;
label_4162cc:
    // 0x4162cc: 0x0  nop
    ctx->pc = 0x4162ccu;
    // NOP
    ctx->pc = 0x4162d0u;
}
