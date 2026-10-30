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

// Function: sub_004DC9B0
// Address: 0x4dc9b0 - 0x4dca28
void sub_004DC9B0_0x4dc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC9B0_0x4dc9b0");
#endif

    switch (ctx->pc) {
        case 0x4dc9b0u: goto label_4dc9b0;
        case 0x4dc9b4u: goto label_4dc9b4;
        case 0x4dc9b8u: goto label_4dc9b8;
        case 0x4dc9bcu: goto label_4dc9bc;
        case 0x4dc9c0u: goto label_4dc9c0;
        case 0x4dc9c4u: goto label_4dc9c4;
        case 0x4dc9c8u: goto label_4dc9c8;
        case 0x4dc9ccu: goto label_4dc9cc;
        case 0x4dc9d0u: goto label_4dc9d0;
        case 0x4dc9d4u: goto label_4dc9d4;
        case 0x4dc9d8u: goto label_4dc9d8;
        case 0x4dc9dcu: goto label_4dc9dc;
        case 0x4dc9e0u: goto label_4dc9e0;
        case 0x4dc9e4u: goto label_4dc9e4;
        case 0x4dc9e8u: goto label_4dc9e8;
        case 0x4dc9ecu: goto label_4dc9ec;
        case 0x4dc9f0u: goto label_4dc9f0;
        case 0x4dc9f4u: goto label_4dc9f4;
        case 0x4dc9f8u: goto label_4dc9f8;
        case 0x4dc9fcu: goto label_4dc9fc;
        case 0x4dca00u: goto label_4dca00;
        case 0x4dca04u: goto label_4dca04;
        case 0x4dca08u: goto label_4dca08;
        case 0x4dca0cu: goto label_4dca0c;
        case 0x4dca10u: goto label_4dca10;
        case 0x4dca14u: goto label_4dca14;
        case 0x4dca18u: goto label_4dca18;
        case 0x4dca1cu: goto label_4dca1c;
        case 0x4dca20u: goto label_4dca20;
        case 0x4dca24u: goto label_4dca24;
        default: break;
    }

    ctx->pc = 0x4dc9b0u;

label_4dc9b0:
    // 0x4dc9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc9b4:
    // 0x4dc9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc9b8:
    // 0x4dc9b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc9bc:
    // 0x4dc9bc: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4dc9bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4dc9c0:
    // 0x4dc9c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4dc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4dc9c4:
    // 0x4dc9c4: 0x40f809  jalr        $v0
label_4dc9c8:
    if (ctx->pc == 0x4DC9C8u) {
        ctx->pc = 0x4DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC9C4u;
        // 0x4dc9c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC9CCu;
        goto label_4dc9cc;
    }
    ctx->pc = 0x4DC9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC9CCu);
        ctx->pc = 0x4DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC9C4u;
        // 0x4dc9c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC9C4u, 0x4DC9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC9CCu;
label_4dc9cc:
    // 0x4dc9cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_4dc9d0:
    if (ctx->pc == 0x4DC9D0u) {
        ctx->pc = 0x4DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC9CCu;
        // 0x4dc9d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC9D4u;
        goto label_4dc9d4;
    }
    ctx->pc = 0x4DC9CCu;
    {
        const bool branch_taken_0x4dc9cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC9CCu;
        // 0x4dc9d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc9cc) {
            ctx->pc = 0x4DC9E8u;
            goto label_4dc9e8;
        }
    }
    ctx->pc = 0x4DC9D4u;
label_4dc9d4:
    // 0x4dc9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4dc9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc9d8:
    // 0x4dc9d8: 0x0  nop
    ctx->pc = 0x4dc9d8u;
    // NOP
label_4dc9dc:
    // 0x4dc9dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4dc9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dc9e0:
    // 0x4dc9e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4dc9e4:
    if (ctx->pc == 0x4DC9E4u) {
        ctx->pc = 0x4DC9E8u;
        goto label_4dc9e8;
    }
    ctx->pc = 0x4DC9E0u;
    {
        const bool branch_taken_0x4dc9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc9e0) {
            ctx->pc = 0x4DCA00u;
            goto label_4dca00;
        }
    }
    ctx->pc = 0x4DC9E8u;
label_4dc9e8:
    // 0x4dc9e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4dc9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4dc9ec:
    // 0x4dc9ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dc9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4dc9f0:
    // 0x4dc9f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4dc9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc9f4:
    // 0x4dc9f4: 0x0  nop
    ctx->pc = 0x4dc9f4u;
    // NOP
label_4dc9f8:
    // 0x4dc9f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4dc9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dc9fc:
    // 0x4dc9fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4dc9fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4dca00:
    // 0x4dca00: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x4dca00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_4dca04:
    // 0x4dca04: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x4dca04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_4dca08:
    // 0x4dca08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4dca08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dca0c:
    // 0x4dca0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dca10:
    // 0x4dca10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4dca10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4dca14:
    // 0x4dca14: 0x3e00008  jr          $ra
label_4dca18:
    if (ctx->pc == 0x4DCA18u) {
        ctx->pc = 0x4DCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA14u;
        // 0x4dca18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCA1Cu;
        goto label_4dca1c;
    }
    ctx->pc = 0x4DCA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA14u;
        // 0x4dca18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCA1Cu;
label_4dca1c:
    // 0x4dca1c: 0x0  nop
    ctx->pc = 0x4dca1cu;
    // NOP
label_4dca20:
    // 0x4dca20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4dca20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4dca24:
    // 0x4dca24: 0x0  nop
    ctx->pc = 0x4dca24u;
    // NOP
    ctx->pc = 0x4dca28u;
}
