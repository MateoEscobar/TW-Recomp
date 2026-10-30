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

// Function: sub_004CE110
// Address: 0x4ce110 - 0x4ce508
void sub_004CE110_0x4ce110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE110_0x4ce110");
#endif

    switch (ctx->pc) {
        case 0x4ce190u: goto label_4ce190;
        case 0x4ce224u: goto label_4ce224;
        case 0x4ce230u: goto label_4ce230;
        case 0x4ce2c0u: goto label_4ce2c0;
        case 0x4ce2ccu: goto label_4ce2cc;
        case 0x4ce314u: goto label_4ce314;
        case 0x4ce31cu: goto label_4ce31c;
        default: break;
    }

    ctx->pc = 0x4ce110u;

    // 0x4ce110: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x4ce110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x4ce114: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce118: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ce118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ce11c: 0x0  nop
    ctx->pc = 0x4ce11cu;
    // NOP
    // 0x4ce120: 0x46036036  c.le.s      $f12, $f3
    ctx->pc = 0x4ce120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce124: 0x0  nop
    ctx->pc = 0x4ce124u;
    // NOP
    // 0x4ce128: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x4CE128u;
    {
        const bool branch_taken_0x4ce128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce128) {
            ctx->pc = 0x4CE34Cu;
            goto label_4ce34c;
        }
    }
    ctx->pc = 0x4CE130u;
    // 0x4ce130: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x4ce130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x4ce134: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ce138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce13c: 0x0  nop
    ctx->pc = 0x4ce13cu;
    // NOP
    // 0x4ce140: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x4ce140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce144: 0x0  nop
    ctx->pc = 0x4ce144u;
    // NOP
    // 0x4ce148: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x4CE148u;
    {
        const bool branch_taken_0x4ce148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce148) {
            ctx->pc = 0x4CE27Cu;
            goto label_4ce27c;
        }
    }
    ctx->pc = 0x4CE150u;
    // 0x4ce150: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x4ce150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x4ce154: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce15c: 0x0  nop
    ctx->pc = 0x4ce15cu;
    // NOP
    // 0x4ce160: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x4ce160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce164: 0x0  nop
    ctx->pc = 0x4ce164u;
    // NOP
    // 0x4ce168: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x4CE168u;
    {
        const bool branch_taken_0x4ce168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce168) {
            ctx->pc = 0x4CE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE168u;
            // 0x4ce16c: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE204u;
            goto label_4ce204;
        }
    }
    ctx->pc = 0x4CE170u;
    // 0x4ce170: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce174: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce17c: 0x0  nop
    ctx->pc = 0x4ce17cu;
    // NOP
    // 0x4ce180: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce184: 0x0  nop
    ctx->pc = 0x4ce184u;
    // NOP
    // 0x4ce188: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4CE188u;
    {
        const bool branch_taken_0x4ce188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce188) {
            ctx->pc = 0x4CE18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE188u;
            // 0x4ce18c: 0x460c6042  mul.s       $f1, $f12, $f12 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE1A0u;
            goto label_4ce1a0;
        }
    }
    ctx->pc = 0x4CE190u;
label_4ce190:
    // 0x4ce190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce198: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE1A0u;
label_4ce1a0:
    // 0x4ce1a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ce1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ce1a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ce1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ce1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce1ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ce1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ce1b0: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x4ce1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x4ce1b4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4ce1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4ce1b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ce1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ce1bc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x4ce1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ce1c0: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x4ce1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x4ce1c4: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4ce1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4ce1c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4ce1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4ce1cc: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x4ce1ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4ce1d0: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x4ce1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x4ce1d4: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x4ce1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x4ce1d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4ce1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4ce1dc: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x4ce1dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ce1e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ce1e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ce1e4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x4ce1e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4ce1e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4ce1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4ce1ec: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4ce1ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4ce1f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4ce1f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4ce1f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4ce1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4ce1f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x4ce1f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4ce1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE1FCu;
        // 0x4ce200: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE204u;
label_4ce204:
    // 0x4ce204: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce208: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce210: 0x0  nop
    ctx->pc = 0x4ce210u;
    // NOP
    // 0x4ce214: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce218: 0x0  nop
    ctx->pc = 0x4ce218u;
    // NOP
    // 0x4ce21c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x4CE21Cu;
    {
        const bool branch_taken_0x4ce21c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce21c) {
            ctx->pc = 0x4CE220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE21Cu;
            // 0x4ce220: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE230u;
            goto label_4ce230;
        }
    }
    ctx->pc = 0x4CE224u;
label_4ce224:
    // 0x4ce224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce228: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE230u;
label_4ce230:
    // 0x4ce230: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x4ce230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x4ce234: 0x3421aaa4  ori         $at, $at, 0xAAA4
    ctx->pc = 0x4ce234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43684);
    // 0x4ce238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ce238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce23c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x4ce23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x4ce240: 0x342183d0  ori         $at, $at, 0x83D0
    ctx->pc = 0x4ce240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33744);
    // 0x4ce244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ce244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ce248: 0x3c01394c  lui         $at, 0x394C
    ctx->pc = 0x4ce248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14668 << 16));
    // 0x4ce24c: 0x3421a644  ori         $at, $at, 0xA644
    ctx->pc = 0x4ce24cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42564);
    // 0x4ce250: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ce250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ce254: 0x460c1802  mul.s       $f0, $f3, $f12
    ctx->pc = 0x4ce254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x4ce258: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4ce258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ce25c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4ce25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4ce260: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x4ce260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x4ce264: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x4ce264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4ce268: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4ce268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4ce26c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4ce26cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4ce270: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4ce270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ce274: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE274u;
        // 0x4ce278: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE27Cu;
label_4ce27c:
    // 0x4ce27c: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x4ce27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x4ce280: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x4ce280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x4ce284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce288: 0x0  nop
    ctx->pc = 0x4ce288u;
    // NOP
    // 0x4ce28c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x4ce28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce290: 0x0  nop
    ctx->pc = 0x4ce290u;
    // NOP
    // 0x4ce294: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x4CE294u;
    {
        const bool branch_taken_0x4ce294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce294) {
            ctx->pc = 0x4CE298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE294u;
            // 0x4ce298: 0x460c1841  sub.s       $f1, $f3, $f12 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE31Cu;
            goto label_4ce31c;
        }
    }
    ctx->pc = 0x4CE29Cu;
    // 0x4ce29c: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x4ce29cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x4ce2a0: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce2a4: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce2a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce2ac: 0x0  nop
    ctx->pc = 0x4ce2acu;
    // NOP
    // 0x4ce2b0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce2b4: 0x0  nop
    ctx->pc = 0x4ce2b4u;
    // NOP
    // 0x4ce2b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x4CE2B8u;
    {
        const bool branch_taken_0x4ce2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce2b8) {
            ctx->pc = 0x4CE2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE2B8u;
            // 0x4ce2bc: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE2CCu;
            goto label_4ce2cc;
        }
    }
    ctx->pc = 0x4CE2C0u;
label_4ce2c0:
    // 0x4ce2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE2C4u;
        // 0x4ce2c8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE2CCu;
label_4ce2cc:
    // 0x4ce2cc: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x4ce2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x4ce2d0: 0x3421aaa4  ori         $at, $at, 0xAAA4
    ctx->pc = 0x4ce2d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43684);
    // 0x4ce2d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ce2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce2d8: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x4ce2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x4ce2dc: 0x342183d0  ori         $at, $at, 0x83D0
    ctx->pc = 0x4ce2dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33744);
    // 0x4ce2e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ce2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ce2e4: 0x3c01394c  lui         $at, 0x394C
    ctx->pc = 0x4ce2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14668 << 16));
    // 0x4ce2e8: 0x3421a644  ori         $at, $at, 0xA644
    ctx->pc = 0x4ce2e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42564);
    // 0x4ce2ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ce2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ce2f0: 0x460c1802  mul.s       $f0, $f3, $f12
    ctx->pc = 0x4ce2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x4ce2f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4ce2f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ce2f8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4ce2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4ce2fc: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x4ce2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x4ce300: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x4ce300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4ce304: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4ce304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4ce308: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4ce308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4ce30c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4ce30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ce310: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ce310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ce314:
    // 0x4ce314: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE314u;
        // 0x4ce318: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE31Cu;
label_4ce31c:
    // 0x4ce31c: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce320: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce328: 0x0  nop
    ctx->pc = 0x4ce328u;
    // NOP
    // 0x4ce32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ce32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce330: 0x0  nop
    ctx->pc = 0x4ce330u;
    // NOP
    // 0x4ce334: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x4CE334u;
    {
        const bool branch_taken_0x4ce334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce334) {
            ctx->pc = 0x4CE338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE334u;
            // 0x4ce338: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE394u;
            goto label_4ce394;
        }
    }
    ctx->pc = 0x4CE33Cu;
    // 0x4ce33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce344: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x4CE344u;
    {
        const bool branch_taken_0x4ce344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce344) {
            ctx->pc = 0x4CE314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce314;
        }
    }
    ctx->pc = 0x4CE34Cu;
label_4ce34c:
    // 0x4ce34c: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x4ce34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x4ce350: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x4ce350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x4ce354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ce354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce358: 0x0  nop
    ctx->pc = 0x4ce358u;
    // NOP
    // 0x4ce35c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x4ce35cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce360: 0x0  nop
    ctx->pc = 0x4ce360u;
    // NOP
    // 0x4ce364: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x4CE364u;
    {
        const bool branch_taken_0x4ce364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce364) {
            ctx->pc = 0x4CE420u;
            goto label_4ce420;
        }
    }
    ctx->pc = 0x4CE36Cu;
    // 0x4ce36c: 0x3c01407b  lui         $at, 0x407B
    ctx->pc = 0x4ce36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16507 << 16));
    // 0x4ce370: 0x342153d1  ori         $at, $at, 0x53D1
    ctx->pc = 0x4ce370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21457);
    // 0x4ce374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce378: 0x0  nop
    ctx->pc = 0x4ce378u;
    // NOP
    // 0x4ce37c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x4ce37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce380: 0x0  nop
    ctx->pc = 0x4ce380u;
    // NOP
    // 0x4ce384: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x4CE384u;
    {
        const bool branch_taken_0x4ce384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce384) {
            ctx->pc = 0x4CE388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE384u;
            // 0x4ce388: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE3F8u;
            goto label_4ce3f8;
        }
    }
    ctx->pc = 0x4CE38Cu;
    // 0x4ce38c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x4CE38Cu;
    {
        const bool branch_taken_0x4ce38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE38Cu;
        // 0x4ce390: 0x46036041  sub.s       $f1, $f12, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce38c) {
            ctx->pc = 0x4CE31Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce31c;
        }
    }
    ctx->pc = 0x4CE394u;
label_4ce394:
    // 0x4ce394: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ce394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ce398: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ce398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ce39c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce3a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ce3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ce3a4: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x4ce3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x4ce3a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4ce3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4ce3ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ce3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ce3b0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x4ce3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ce3b4: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x4ce3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x4ce3b8: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4ce3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4ce3bc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4ce3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4ce3c0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x4ce3c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4ce3c4: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x4ce3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x4ce3c8: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x4ce3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x4ce3cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4ce3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4ce3d0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x4ce3d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ce3d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ce3d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ce3d8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x4ce3d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4ce3dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4ce3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4ce3e0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4ce3e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4ce3e4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4ce3e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4ce3e8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4ce3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4ce3ec: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x4ce3ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4ce3f0: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x4CE3F0u;
    {
        const bool branch_taken_0x4ce3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE3F0u;
        // 0x4ce3f4: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce3f0) {
            ctx->pc = 0x4CE314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce314;
        }
    }
    ctx->pc = 0x4CE3F8u;
label_4ce3f8:
    // 0x4ce3f8: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce3fc: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce404: 0x0  nop
    ctx->pc = 0x4ce404u;
    // NOP
    // 0x4ce408: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce40c: 0x0  nop
    ctx->pc = 0x4ce40cu;
    // NOP
    // 0x4ce410: 0x4501ffab  bc1t        . + 4 + (-0x55 << 2)
    ctx->pc = 0x4CE410u;
    {
        const bool branch_taken_0x4ce410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce410) {
            ctx->pc = 0x4CE2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce2c0;
        }
    }
    ctx->pc = 0x4CE418u;
    // 0x4ce418: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x4CE418u;
    {
        const bool branch_taken_0x4ce418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE418u;
        // 0x4ce41c: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce418) {
            ctx->pc = 0x4CE2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce2cc;
        }
    }
    ctx->pc = 0x4CE420u;
label_4ce420:
    // 0x4ce420: 0x3c0140af  lui         $at, 0x40AF
    ctx->pc = 0x4ce420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16559 << 16));
    // 0x4ce424: 0x3421eddf  ori         $at, $at, 0xEDDF
    ctx->pc = 0x4ce424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60895);
    // 0x4ce428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce42c: 0x0  nop
    ctx->pc = 0x4ce42cu;
    // NOP
    // 0x4ce430: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x4ce430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce434: 0x0  nop
    ctx->pc = 0x4ce434u;
    // NOP
    // 0x4ce438: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4CE438u;
    {
        const bool branch_taken_0x4ce438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce438) {
            ctx->pc = 0x4CE46Cu;
            goto label_4ce46c;
        }
    }
    ctx->pc = 0x4CE440u;
    // 0x4ce440: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x4ce440u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x4ce444: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce448: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce44c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce450: 0x0  nop
    ctx->pc = 0x4ce450u;
    // NOP
    // 0x4ce454: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce458: 0x0  nop
    ctx->pc = 0x4ce458u;
    // NOP
    // 0x4ce45c: 0x4501ff71  bc1t        . + 4 + (-0x8F << 2)
    ctx->pc = 0x4CE45Cu;
    {
        const bool branch_taken_0x4ce45c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce45c) {
            ctx->pc = 0x4CE224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce224;
        }
    }
    ctx->pc = 0x4CE464u;
    // 0x4ce464: 0x1000ff72  b           . + 4 + (-0x8E << 2)
    ctx->pc = 0x4CE464u;
    {
        const bool branch_taken_0x4ce464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE464u;
        // 0x4ce468: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce464) {
            ctx->pc = 0x4CE230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce230;
        }
    }
    ctx->pc = 0x4CE46Cu;
label_4ce46c:
    // 0x4ce46c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce470: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce478: 0x3c013109  lui         $at, 0x3109
    ctx->pc = 0x4ce478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12553 << 16));
    // 0x4ce47c: 0x3421705f  ori         $at, $at, 0x705F
    ctx->pc = 0x4ce47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28767);
    // 0x4ce480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ce480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce484: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x4ce484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4ce488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ce488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce48c: 0x0  nop
    ctx->pc = 0x4ce48cu;
    // NOP
    // 0x4ce490: 0x4501ff3f  bc1t        . + 4 + (-0xC1 << 2)
    ctx->pc = 0x4CE490u;
    {
        const bool branch_taken_0x4ce490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce490) {
            ctx->pc = 0x4CE190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ce190;
        }
    }
    ctx->pc = 0x4CE498u;
    // 0x4ce498: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x4ce498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4ce49c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ce49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ce4a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ce4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ce4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce4a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ce4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ce4ac: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x4ce4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x4ce4b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4ce4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4ce4b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ce4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ce4b8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x4ce4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ce4bc: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x4ce4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x4ce4c0: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4ce4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4ce4c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4ce4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4ce4c8: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x4ce4c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4ce4cc: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x4ce4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x4ce4d0: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x4ce4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x4ce4d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4ce4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4ce4d8: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x4ce4d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ce4dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ce4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ce4e0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x4ce4e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4ce4e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4ce4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4ce4e8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4ce4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4ce4ec: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4ce4ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4ce4f0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4ce4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4ce4f4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x4ce4f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4ce4f8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x4ce4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4ce4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE504u;
    // 0x4ce504: 0x0  nop
    ctx->pc = 0x4ce504u;
    // NOP
    ctx->pc = 0x4ce508u;
}
