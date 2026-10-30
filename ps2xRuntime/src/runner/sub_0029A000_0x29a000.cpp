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

// Function: sub_0029A000
// Address: 0x29a000 - 0x29a078
void sub_0029A000_0x29a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A000_0x29a000");
#endif

    switch (ctx->pc) {
        case 0x29a000u: goto label_29a000;
        case 0x29a004u: goto label_29a004;
        case 0x29a008u: goto label_29a008;
        case 0x29a00cu: goto label_29a00c;
        case 0x29a010u: goto label_29a010;
        case 0x29a014u: goto label_29a014;
        case 0x29a018u: goto label_29a018;
        case 0x29a01cu: goto label_29a01c;
        case 0x29a020u: goto label_29a020;
        case 0x29a024u: goto label_29a024;
        case 0x29a028u: goto label_29a028;
        case 0x29a02cu: goto label_29a02c;
        case 0x29a030u: goto label_29a030;
        case 0x29a034u: goto label_29a034;
        case 0x29a038u: goto label_29a038;
        case 0x29a03cu: goto label_29a03c;
        case 0x29a040u: goto label_29a040;
        case 0x29a044u: goto label_29a044;
        case 0x29a048u: goto label_29a048;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a050u: goto label_29a050;
        case 0x29a054u: goto label_29a054;
        case 0x29a058u: goto label_29a058;
        case 0x29a05cu: goto label_29a05c;
        case 0x29a060u: goto label_29a060;
        case 0x29a064u: goto label_29a064;
        case 0x29a068u: goto label_29a068;
        case 0x29a06cu: goto label_29a06c;
        case 0x29a070u: goto label_29a070;
        case 0x29a074u: goto label_29a074;
        default: break;
    }

    ctx->pc = 0x29a000u;

label_29a000:
    // 0x29a000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29a004:
    // 0x29a004: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x29a004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_29a008:
    // 0x29a008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_29a00c:
    // 0x29a00c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a010:
    // 0x29a010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a014:
    // 0x29a014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a018:
    // 0x29a018: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29a018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a01c:
    // 0x29a01c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x29a01cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_29a020:
    // 0x29a020: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x29a020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
label_29a024:
    // 0x29a024: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29a024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_29a028:
    // 0x29a028: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29a02c:
    // 0x29a02c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29a030:
    // 0x29a030: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29a034:
    // 0x29a034: 0x40f809  jalr        $v0
label_29a038:
    if (ctx->pc == 0x29A038u) {
        ctx->pc = 0x29A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A034u;
        // 0x29a038: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A03Cu;
        goto label_29a03c;
    }
    ctx->pc = 0x29A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A03Cu);
        ctx->pc = 0x29A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A034u;
        // 0x29a038: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A034u, 0x29A03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A03Cu;
label_29a03c:
    // 0x29a03c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_29a040:
    // 0x29a040: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29a040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29a044:
    // 0x29a044: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_29a048:
    // 0x29a048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a04c:
    // 0x29a04c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29a04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_29a050:
    // 0x29a050: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_29a054:
    // 0x29a054: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29a058:
    // 0x29a058: 0xc0a679a  jal         func_299E68
label_29a05c:
    if (ctx->pc == 0x29A05Cu) {
        ctx->pc = 0x29A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A058u;
        // 0x29a05c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A060u;
        goto label_29a060;
    }
    ctx->pc = 0x29A058u;
    SET_GPR_U32(ctx, 31, 0x29A060u);
    ctx->pc = 0x29A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A058u;
    // 0x29a05c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E68u, 0x29A058u, 0x29A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A060u;
label_29a060:
    // 0x29a060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29a060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a064:
    // 0x29a064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a068:
    // 0x29a068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a06c:
    // 0x29a06c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x29a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29a070:
    // 0x29a070: 0x3e00008  jr          $ra
label_29a074:
    if (ctx->pc == 0x29A074u) {
        ctx->pc = 0x29A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A070u;
        // 0x29a074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A078u;
        goto label_fallthrough_0x29a070;
    }
    ctx->pc = 0x29A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A070u;
        // 0x29a074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a070:
    ctx->pc = 0x29A078u;
}
