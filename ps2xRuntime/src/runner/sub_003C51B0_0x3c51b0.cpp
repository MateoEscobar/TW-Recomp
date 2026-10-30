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

// Function: sub_003C51B0
// Address: 0x3c51b0 - 0x3c5248
void sub_003C51B0_0x3c51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C51B0_0x3c51b0");
#endif

    switch (ctx->pc) {
        case 0x3c51b0u: goto label_3c51b0;
        case 0x3c51b4u: goto label_3c51b4;
        case 0x3c51b8u: goto label_3c51b8;
        case 0x3c51bcu: goto label_3c51bc;
        case 0x3c51c0u: goto label_3c51c0;
        case 0x3c51c4u: goto label_3c51c4;
        case 0x3c51c8u: goto label_3c51c8;
        case 0x3c51ccu: goto label_3c51cc;
        case 0x3c51d0u: goto label_3c51d0;
        case 0x3c51d4u: goto label_3c51d4;
        case 0x3c51d8u: goto label_3c51d8;
        case 0x3c51dcu: goto label_3c51dc;
        case 0x3c51e0u: goto label_3c51e0;
        case 0x3c51e4u: goto label_3c51e4;
        case 0x3c51e8u: goto label_3c51e8;
        case 0x3c51ecu: goto label_3c51ec;
        case 0x3c51f0u: goto label_3c51f0;
        case 0x3c51f4u: goto label_3c51f4;
        case 0x3c51f8u: goto label_3c51f8;
        case 0x3c51fcu: goto label_3c51fc;
        case 0x3c5200u: goto label_3c5200;
        case 0x3c5204u: goto label_3c5204;
        case 0x3c5208u: goto label_3c5208;
        case 0x3c520cu: goto label_3c520c;
        case 0x3c5210u: goto label_3c5210;
        case 0x3c5214u: goto label_3c5214;
        case 0x3c5218u: goto label_3c5218;
        case 0x3c521cu: goto label_3c521c;
        case 0x3c5220u: goto label_3c5220;
        case 0x3c5224u: goto label_3c5224;
        case 0x3c5228u: goto label_3c5228;
        case 0x3c522cu: goto label_3c522c;
        case 0x3c5230u: goto label_3c5230;
        case 0x3c5234u: goto label_3c5234;
        case 0x3c5238u: goto label_3c5238;
        case 0x3c523cu: goto label_3c523c;
        case 0x3c5240u: goto label_3c5240;
        case 0x3c5244u: goto label_3c5244;
        default: break;
    }

    ctx->pc = 0x3c51b0u;

label_3c51b0:
    // 0x3c51b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c51b4:
    // 0x3c51b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c51b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c51b8:
    // 0x3c51b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c51bc:
    // 0x3c51bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c51bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c51c0:
    // 0x3c51c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c51c4:
    // 0x3c51c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c51c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c51c8:
    // 0x3c51c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c51cc:
    // 0x3c51cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c51d0:
    // 0x3c51d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c51d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c51d4:
    // 0x3c51d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c51d8:
    // 0x3c51d8: 0x40f809  jalr        $v0
label_3c51dc:
    if (ctx->pc == 0x3C51DCu) {
        ctx->pc = 0x3C51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51D8u;
        // 0x3c51dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C51E0u;
        goto label_3c51e0;
    }
    ctx->pc = 0x3C51D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C51E0u);
        ctx->pc = 0x3C51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51D8u;
        // 0x3c51dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C51D8u, 0x3C51E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C51E0u;
label_3c51e0:
    // 0x3c51e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c51e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c51e4:
    // 0x3c51e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c51e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c51e8:
    // 0x3c51e8: 0xc0e858c  jal         func_3A1630
label_3c51ec:
    if (ctx->pc == 0x3C51ECu) {
        ctx->pc = 0x3C51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51E8u;
        // 0x3c51ec: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C51F0u;
        goto label_3c51f0;
    }
    ctx->pc = 0x3C51E8u;
    SET_GPR_U32(ctx, 31, 0x3C51F0u);
    ctx->pc = 0x3C51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51E8u;
    // 0x3c51ec: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C51E8u, 0x3C51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51F0u;
label_3c51f0:
    // 0x3c51f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c51f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c51f4:
    // 0x3c51f4: 0xc0ea12a  jal         func_3A84A8
label_3c51f8:
    if (ctx->pc == 0x3C51F8u) {
        ctx->pc = 0x3C51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51F4u;
        // 0x3c51f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C51FCu;
        goto label_3c51fc;
    }
    ctx->pc = 0x3C51F4u;
    SET_GPR_U32(ctx, 31, 0x3C51FCu);
    ctx->pc = 0x3C51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51F4u;
    // 0x3c51f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C51F4u, 0x3C51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51FCu;
label_3c51fc:
    // 0x3c51fc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c51fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c5200:
    // 0x3c5200: 0x3c02daca  lui         $v0, 0xDACA
    ctx->pc = 0x3c5200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56010 << 16));
label_3c5204:
    // 0x3c5204: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3c5204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3c5208:
    // 0x3c5208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c5208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c520c:
    // 0x3c520c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c5210:
    // 0x3c5210: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x3c5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_3c5214:
    // 0x3c5214: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3c5214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3c5218:
    // 0x3c5218: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3c5218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3c521c:
    // 0x3c521c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3c521cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3c5220:
    // 0x3c5220: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3c5220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3c5224:
    // 0x3c5224: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3c5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3c5228:
    // 0x3c5228: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3c5228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3c522c:
    // 0x3c522c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c522cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3c5230:
    // 0x3c5230: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c5230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c5234:
    // 0x3c5234: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c5234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5238:
    // 0x3c5238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c523c:
    // 0x3c523c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c523cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5240:
    // 0x3c5240: 0x3e00008  jr          $ra
label_3c5244:
    if (ctx->pc == 0x3C5244u) {
        ctx->pc = 0x3C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5240u;
        // 0x3c5244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5248u;
        goto label_fallthrough_0x3c5240;
    }
    ctx->pc = 0x3C5240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5240u;
        // 0x3c5244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c5240:
    ctx->pc = 0x3C5248u;
}
