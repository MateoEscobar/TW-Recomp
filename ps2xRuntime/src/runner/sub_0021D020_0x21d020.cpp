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

// Function: sub_0021D020
// Address: 0x21d020 - 0x21d080
void sub_0021D020_0x21d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D020_0x21d020");
#endif

    switch (ctx->pc) {
        case 0x21d034u: goto label_21d034;
        default: break;
    }

    ctx->pc = 0x21d020u;

    // 0x21d020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21d028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d02c: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x21D02Cu;
    SET_GPR_U32(ctx, 31, 0x21D034u);
    ctx->pc = 0x21D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D02Cu;
    // 0x21d030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x21D02Cu, 0x21D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D034u;
label_21d034:
    // 0x21d034: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21D034u;
    {
        const bool branch_taken_0x21d034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d034) {
            ctx->pc = 0x21D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D034u;
            // 0x21d038: 0xc600065c  lwc1        $f0, 0x65C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D070u;
            goto label_21d070;
        }
    }
    ctx->pc = 0x21D03Cu;
    // 0x21d03c: 0xc601065c  lwc1        $f1, 0x65C($s0)
    ctx->pc = 0x21d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d040: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x21d040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x21d044: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21d044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21d048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21d048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d04c: 0x0  nop
    ctx->pc = 0x21d04cu;
    // NOP
    // 0x21d050: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21d050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d054: 0x0  nop
    ctx->pc = 0x21d054u;
    // NOP
    // 0x21d058: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x21D058u;
    {
        const bool branch_taken_0x21d058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d058) {
            ctx->pc = 0x21D068u;
            goto label_21d068;
        }
    }
    ctx->pc = 0x21D060u;
    // 0x21d060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D060u;
    {
        const bool branch_taken_0x21d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D060u;
        // 0x21d064: 0xc600065c  lwc1        $f0, 0x65C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d060) {
            ctx->pc = 0x21D070u;
            goto label_21d070;
        }
    }
    ctx->pc = 0x21D068u;
label_21d068:
    // 0x21d068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21d068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21d06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21d06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21d070:
    // 0x21d070: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d078: 0x3e00008  jr          $ra
    ctx->pc = 0x21D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D078u;
        // 0x21d07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D080u;
}
