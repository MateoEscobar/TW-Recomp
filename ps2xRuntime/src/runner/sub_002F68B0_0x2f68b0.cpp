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

// Function: sub_002F68B0
// Address: 0x2f68b0 - 0x2f6938
void sub_002F68B0_0x2f68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F68B0_0x2f68b0");
#endif

    switch (ctx->pc) {
        case 0x2f68b0u: goto label_2f68b0;
        case 0x2f68b4u: goto label_2f68b4;
        case 0x2f68b8u: goto label_2f68b8;
        case 0x2f68bcu: goto label_2f68bc;
        case 0x2f68c0u: goto label_2f68c0;
        case 0x2f68c4u: goto label_2f68c4;
        case 0x2f68c8u: goto label_2f68c8;
        case 0x2f68ccu: goto label_2f68cc;
        case 0x2f68d0u: goto label_2f68d0;
        case 0x2f68d4u: goto label_2f68d4;
        case 0x2f68d8u: goto label_2f68d8;
        case 0x2f68dcu: goto label_2f68dc;
        case 0x2f68e0u: goto label_2f68e0;
        case 0x2f68e4u: goto label_2f68e4;
        case 0x2f68e8u: goto label_2f68e8;
        case 0x2f68ecu: goto label_2f68ec;
        case 0x2f68f0u: goto label_2f68f0;
        case 0x2f68f4u: goto label_2f68f4;
        case 0x2f68f8u: goto label_2f68f8;
        case 0x2f68fcu: goto label_2f68fc;
        case 0x2f6900u: goto label_2f6900;
        case 0x2f6904u: goto label_2f6904;
        case 0x2f6908u: goto label_2f6908;
        case 0x2f690cu: goto label_2f690c;
        case 0x2f6910u: goto label_2f6910;
        case 0x2f6914u: goto label_2f6914;
        case 0x2f6918u: goto label_2f6918;
        case 0x2f691cu: goto label_2f691c;
        case 0x2f6920u: goto label_2f6920;
        case 0x2f6924u: goto label_2f6924;
        case 0x2f6928u: goto label_2f6928;
        case 0x2f692cu: goto label_2f692c;
        case 0x2f6930u: goto label_2f6930;
        case 0x2f6934u: goto label_2f6934;
        default: break;
    }

    ctx->pc = 0x2f68b0u;

label_2f68b0:
    // 0x2f68b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f68b4:
    // 0x2f68b4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f68b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f68b8:
    // 0x2f68b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f68b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f68bc:
    // 0x2f68bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f68bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f68c0:
    // 0x2f68c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f68c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f68c4:
    // 0x2f68c4: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x2f68c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
label_2f68c8:
    // 0x2f68c8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2f68c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2f68cc:
    // 0x2f68cc: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x2f68ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f68d0:
    // 0x2f68d0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x2f68d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_2f68d4:
    // 0x2f68d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f68d8:
    // 0x2f68d8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2f68d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f68dc:
    // 0x2f68dc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f68dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2f68e0:
    // 0x2f68e0: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2f68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2f68e4:
    // 0x2f68e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2f68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f68e8:
    // 0x2f68e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f68ec:
    // 0x2f68ec: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f68ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2f68f0:
    // 0x2f68f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f68f4:
    // 0x2f68f4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f68f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f68f8:
    // 0x2f68f8: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2f68f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
label_2f68fc:
    // 0x2f68fc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2f68fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_2f6900:
    // 0x2f6900: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2f6900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2f6904:
    // 0x2f6904: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2f6904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_2f6908:
    // 0x2f6908: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f6908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2f690c:
    // 0x2f690c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2f6910:
    // 0x2f6910: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2f6910u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
label_2f6914:
    // 0x2f6914: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f6918:
    // 0x2f6918: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x2f6918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f691c:
    // 0x2f691c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2f691cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f6920:
    // 0x2f6920: 0xa0f809  jalr        $a1
label_2f6924:
    if (ctx->pc == 0x2F6924u) {
        ctx->pc = 0x2F6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6920u;
        // 0x2f6924: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6928u;
        goto label_2f6928;
    }
    ctx->pc = 0x2F6920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F6928u);
        ctx->pc = 0x2F6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6920u;
        // 0x2f6924: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6920u, 0x2F6928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6928u;
label_2f6928:
    // 0x2f6928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f692c:
    // 0x2f692c: 0x3e00008  jr          $ra
label_2f6930:
    if (ctx->pc == 0x2F6930u) {
        ctx->pc = 0x2F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F692Cu;
        // 0x2f6930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6934u;
        goto label_2f6934;
    }
    ctx->pc = 0x2F692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F692Cu;
        // 0x2f6930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F692Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6934u;
label_2f6934:
    // 0x2f6934: 0x0  nop
    ctx->pc = 0x2f6934u;
    // NOP
    ctx->pc = 0x2f6938u;
}
