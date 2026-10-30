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

// Function: sub_002D4F40
// Address: 0x2d4f40 - 0x2d4fc0
void sub_002D4F40_0x2d4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4F40_0x2d4f40");
#endif

    switch (ctx->pc) {
        case 0x2d4f40u: goto label_2d4f40;
        case 0x2d4f44u: goto label_2d4f44;
        case 0x2d4f48u: goto label_2d4f48;
        case 0x2d4f4cu: goto label_2d4f4c;
        case 0x2d4f50u: goto label_2d4f50;
        case 0x2d4f54u: goto label_2d4f54;
        case 0x2d4f58u: goto label_2d4f58;
        case 0x2d4f5cu: goto label_2d4f5c;
        case 0x2d4f60u: goto label_2d4f60;
        case 0x2d4f64u: goto label_2d4f64;
        case 0x2d4f68u: goto label_2d4f68;
        case 0x2d4f6cu: goto label_2d4f6c;
        case 0x2d4f70u: goto label_2d4f70;
        case 0x2d4f74u: goto label_2d4f74;
        case 0x2d4f78u: goto label_2d4f78;
        case 0x2d4f7cu: goto label_2d4f7c;
        case 0x2d4f80u: goto label_2d4f80;
        case 0x2d4f84u: goto label_2d4f84;
        case 0x2d4f88u: goto label_2d4f88;
        case 0x2d4f8cu: goto label_2d4f8c;
        case 0x2d4f90u: goto label_2d4f90;
        case 0x2d4f94u: goto label_2d4f94;
        case 0x2d4f98u: goto label_2d4f98;
        case 0x2d4f9cu: goto label_2d4f9c;
        case 0x2d4fa0u: goto label_2d4fa0;
        case 0x2d4fa4u: goto label_2d4fa4;
        case 0x2d4fa8u: goto label_2d4fa8;
        case 0x2d4facu: goto label_2d4fac;
        case 0x2d4fb0u: goto label_2d4fb0;
        case 0x2d4fb4u: goto label_2d4fb4;
        case 0x2d4fb8u: goto label_2d4fb8;
        case 0x2d4fbcu: goto label_2d4fbc;
        default: break;
    }

    ctx->pc = 0x2d4f40u;

label_2d4f40:
    // 0x2d4f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d4f44:
    // 0x2d4f44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2d4f48:
    // 0x2d4f48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d4f4c:
    // 0x2d4f4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d4f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d4f50:
    // 0x2d4f50: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d4f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d4f54:
    // 0x2d4f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d4f58:
    // 0x2d4f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4f5c:
    // 0x2d4f5c: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
label_2d4f60:
    // 0x2d4f60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4f64:
    // 0x2d4f64: 0xc44c0140  lwc1        $f12, 0x140($v0)
    ctx->pc = 0x2d4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d4f68:
    // 0x2d4f68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d4f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d4f6c:
    // 0x2d4f6c: 0xc0a72ee  jal         func_29CBB8
label_2d4f70:
    if (ctx->pc == 0x2D4F70u) {
        ctx->pc = 0x2D4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F6Cu;
        // 0x2d4f70: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F74u;
        goto label_2d4f74;
    }
    ctx->pc = 0x2D4F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F74u);
    ctx->pc = 0x2D4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F6Cu;
    // 0x2d4f70: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2D4F6Cu, 0x2D4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F74u;
label_2d4f74:
    // 0x2d4f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4f78:
    // 0x2d4f78: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2d4f7c:
    if (ctx->pc == 0x2D4F7Cu) {
        ctx->pc = 0x2D4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F78u;
        // 0x2d4f7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F80u;
        goto label_2d4f80;
    }
    ctx->pc = 0x2D4F78u;
    {
        const bool branch_taken_0x2d4f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F78u;
        // 0x2d4f7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f78) {
            ctx->pc = 0x2D4F9Cu;
            goto label_2d4f9c;
        }
    }
    ctx->pc = 0x2D4F80u;
label_2d4f80:
    // 0x2d4f80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d4f84:
    // 0x2d4f84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d4f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d4f88:
    // 0x2d4f88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d4f8c:
    // 0x2d4f8c: 0x40f809  jalr        $v0
label_2d4f90:
    if (ctx->pc == 0x2D4F90u) {
        ctx->pc = 0x2D4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F8Cu;
        // 0x2d4f90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F94u;
        goto label_2d4f94;
    }
    ctx->pc = 0x2D4F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D4F94u);
        ctx->pc = 0x2D4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F8Cu;
        // 0x2d4f90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F8Cu, 0x2D4F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4F94u;
label_2d4f94:
    // 0x2d4f94: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d4f98:
    if (ctx->pc == 0x2D4F98u) {
        ctx->pc = 0x2D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F94u;
        // 0x2d4f98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F9Cu;
        goto label_2d4f9c;
    }
    ctx->pc = 0x2D4F94u;
    {
        const bool branch_taken_0x2d4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F94u;
        // 0x2d4f98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f94) {
            ctx->pc = 0x2D4FA4u;
            goto label_2d4fa4;
        }
    }
    ctx->pc = 0x2D4F9Cu;
label_2d4f9c:
    // 0x2d4f9c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d4fa0:
    // 0x2d4fa0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2d4fa4:
    // 0x2d4fa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4fa8:
    // 0x2d4fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4fac:
    // 0x2d4fac: 0x3e00008  jr          $ra
label_2d4fb0:
    if (ctx->pc == 0x2D4FB0u) {
        ctx->pc = 0x2D4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FACu;
        // 0x2d4fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4FB4u;
        goto label_2d4fb4;
    }
    ctx->pc = 0x2D4FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FACu;
        // 0x2d4fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4FB4u;
label_2d4fb4:
    // 0x2d4fb4: 0x0  nop
    ctx->pc = 0x2d4fb4u;
    // NOP
label_2d4fb8:
    // 0x2d4fb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d4fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d4fbc:
    // 0x2d4fbc: 0x0  nop
    ctx->pc = 0x2d4fbcu;
    // NOP
    ctx->pc = 0x2d4fc0u;
}
