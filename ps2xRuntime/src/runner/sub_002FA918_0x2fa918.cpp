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

// Function: sub_002FA918
// Address: 0x2fa918 - 0x2fa9a8
void sub_002FA918_0x2fa918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA918_0x2fa918");
#endif

    switch (ctx->pc) {
        case 0x2fa918u: goto label_2fa918;
        case 0x2fa91cu: goto label_2fa91c;
        case 0x2fa920u: goto label_2fa920;
        case 0x2fa924u: goto label_2fa924;
        case 0x2fa928u: goto label_2fa928;
        case 0x2fa92cu: goto label_2fa92c;
        case 0x2fa930u: goto label_2fa930;
        case 0x2fa934u: goto label_2fa934;
        case 0x2fa938u: goto label_2fa938;
        case 0x2fa93cu: goto label_2fa93c;
        case 0x2fa940u: goto label_2fa940;
        case 0x2fa944u: goto label_2fa944;
        case 0x2fa948u: goto label_2fa948;
        case 0x2fa94cu: goto label_2fa94c;
        case 0x2fa950u: goto label_2fa950;
        case 0x2fa954u: goto label_2fa954;
        case 0x2fa958u: goto label_2fa958;
        case 0x2fa95cu: goto label_2fa95c;
        case 0x2fa960u: goto label_2fa960;
        case 0x2fa964u: goto label_2fa964;
        case 0x2fa968u: goto label_2fa968;
        case 0x2fa96cu: goto label_2fa96c;
        case 0x2fa970u: goto label_2fa970;
        case 0x2fa974u: goto label_2fa974;
        case 0x2fa978u: goto label_2fa978;
        case 0x2fa97cu: goto label_2fa97c;
        case 0x2fa980u: goto label_2fa980;
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa988u: goto label_2fa988;
        case 0x2fa98cu: goto label_2fa98c;
        case 0x2fa990u: goto label_2fa990;
        case 0x2fa994u: goto label_2fa994;
        case 0x2fa998u: goto label_2fa998;
        case 0x2fa99cu: goto label_2fa99c;
        case 0x2fa9a0u: goto label_2fa9a0;
        case 0x2fa9a4u: goto label_2fa9a4;
        default: break;
    }

    ctx->pc = 0x2fa918u;

label_2fa918:
    // 0x2fa918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fa918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fa91c:
    // 0x2fa91c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2fa920:
    // 0x2fa920: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fa920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2fa924:
    // 0x2fa924: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x2fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
label_2fa928:
    // 0x2fa928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fa92c:
    // 0x2fa92c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fa92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2fa930:
    // 0x2fa930: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2fa930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2fa934:
    // 0x2fa934: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2fa934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fa938:
    // 0x2fa938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fa93c:
    // 0x2fa93c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2fa93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2fa940:
    // 0x2fa940: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2fa940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2fa944:
    // 0x2fa944: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fa944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2fa948:
    // 0x2fa948: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fa948u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2fa94c:
    // 0x2fa94c: 0xa6090004  sh          $t1, 0x4($s0)
    ctx->pc = 0x2fa94cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 9));
label_2fa950:
    // 0x2fa950: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fa950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2fa954:
    // 0x2fa954: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2fa954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_2fa958:
    // 0x2fa958: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fa95c:
    // 0x2fa95c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fa95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fa960:
    // 0x2fa960: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fa960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa964:
    // 0x2fa964: 0x40f809  jalr        $v0
label_2fa968:
    if (ctx->pc == 0x2FA968u) {
        ctx->pc = 0x2FA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA964u;
        // 0x2fa968: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA96Cu;
        goto label_2fa96c;
    }
    ctx->pc = 0x2FA964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FA96Cu);
        ctx->pc = 0x2FA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA964u;
        // 0x2fa968: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA964u, 0x2FA96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA96Cu;
label_2fa96c:
    // 0x2fa96c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2fa970:
    // 0x2fa970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa974:
    // 0x2fa974: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2fa974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_2fa978:
    // 0x2fa978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fa978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa97c:
    // 0x2fa97c: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x2fa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
label_2fa980:
    // 0x2fa980: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x2fa980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2fa984:
    // 0x2fa984: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2fa984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_2fa988:
    // 0x2fa988: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2fa988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2fa98c:
    // 0x2fa98c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fa98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fa990:
    // 0x2fa990: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fa990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fa994:
    // 0x2fa994: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2fa994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa998:
    // 0x2fa998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa99c:
    // 0x2fa99c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2fa99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fa9a0:
    // 0x2fa9a0: 0x3e00008  jr          $ra
label_2fa9a4:
    if (ctx->pc == 0x2FA9A4u) {
        ctx->pc = 0x2FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9A0u;
        // 0x2fa9a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA9A8u;
        goto label_fallthrough_0x2fa9a0;
    }
    ctx->pc = 0x2FA9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9A0u;
        // 0x2fa9a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fa9a0:
    ctx->pc = 0x2FA9A8u;
}
