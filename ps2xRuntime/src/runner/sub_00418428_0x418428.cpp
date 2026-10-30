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

// Function: sub_00418428
// Address: 0x418428 - 0x418518
void sub_00418428_0x418428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418428_0x418428");
#endif

    ctx->pc = 0x418428u;

    // 0x418428: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x418428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41842c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x418430: 0xa0c0000a  sb          $zero, 0xA($a2)
    ctx->pc = 0x418430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x418434: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x418434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x418438: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x418438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x41843c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x41843Cu;
    {
        const bool branch_taken_0x41843c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x418440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41843Cu;
        // 0x418440: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41843c) {
            ctx->pc = 0x418464u;
            goto label_418464;
        }
    }
    ctx->pc = 0x418444u;
    // 0x418444: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x418444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x418448: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x418448u;
    {
        const bool branch_taken_0x418448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x418448) {
            ctx->pc = 0x41844Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418448u;
            // 0x41844c: 0xa0c00008  sb          $zero, 0x8($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418468u;
            goto label_418468;
        }
    }
    ctx->pc = 0x418450u;
    // 0x418450: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x418450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x418454: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x418454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x418458: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x418458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x41845c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41845Cu;
    {
        const bool branch_taken_0x41845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41845c) {
            ctx->pc = 0x41846Cu;
            goto label_41846c;
        }
    }
    ctx->pc = 0x418464u;
label_418464:
    // 0x418464: 0xa0c00008  sb          $zero, 0x8($a2)
    ctx->pc = 0x418464u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 0));
label_418468:
    // 0x418468: 0xa0c00009  sb          $zero, 0x9($a2)
    ctx->pc = 0x418468u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 0));
label_41846c:
    // 0x41846c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x41846Cu;
    {
        const bool branch_taken_0x41846c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x418470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41846Cu;
        // 0x418470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41846c) {
            ctx->pc = 0x418484u;
            goto label_418484;
        }
    }
    ctx->pc = 0x418474u;
    // 0x418474: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x418474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x418478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x418478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41847c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x41847Cu;
    {
        const bool branch_taken_0x41847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41847Cu;
        // 0x418480: 0xa0c20008  sb          $v0, 0x8($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41847c) {
            ctx->pc = 0x418498u;
            goto label_418498;
        }
    }
    ctx->pc = 0x418484u;
label_418484:
    // 0x418484: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x418484u;
    {
        const bool branch_taken_0x418484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x418484) {
            ctx->pc = 0x418488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418484u;
            // 0x418488: 0x90c20008  lbu         $v0, 0x8($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41849Cu;
            goto label_41849c;
        }
    }
    ctx->pc = 0x41848Cu;
    // 0x41848c: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x41848cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x418490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x418490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x418494: 0xa0c20009  sb          $v0, 0x9($a2)
    ctx->pc = 0x418494u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 2));
label_418498:
    // 0x418498: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x418498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_41849c:
    // 0x41849c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x41849cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4184a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4184A0u;
    {
        const bool branch_taken_0x4184a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4184a0) {
            ctx->pc = 0x4184A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4184A0u;
            // 0x4184a4: 0x90c20009  lbu         $v0, 0x9($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4184BCu;
            goto label_4184bc;
        }
    }
    ctx->pc = 0x4184A8u;
    // 0x4184a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4184a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4184ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4184acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4184b0: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x4184b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x4184b4: 0xa0c3000a  sb          $v1, 0xA($a2)
    ctx->pc = 0x4184b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x4184b8: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x4184b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
label_4184bc:
    // 0x4184bc: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x4184bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4184c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4184C0u;
    {
        const bool branch_taken_0x4184c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4184C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4184C0u;
        // 0x4184c4: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4184c0) {
            ctx->pc = 0x4184DCu;
            goto label_4184dc;
        }
    }
    ctx->pc = 0x4184C8u;
    // 0x4184c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4184c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4184cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4184ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4184d0: 0xa0c20009  sb          $v0, 0x9($a2)
    ctx->pc = 0x4184d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x4184d4: 0xa0c3000a  sb          $v1, 0xA($a2)
    ctx->pc = 0x4184d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x4184d8: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x4184d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_4184dc:
    // 0x4184dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4184dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4184e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4184E0u;
    {
        const bool branch_taken_0x4184e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4184e0) {
            ctx->pc = 0x4184E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4184E0u;
            // 0x4184e4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418510u;
            goto label_418510;
        }
    }
    ctx->pc = 0x4184E8u;
    // 0x4184e8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4184e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4184ec: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x4184ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x4184f0: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x4184f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x4184f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4184f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4184f8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4184f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4184fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4184fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x418500: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x418500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x418504: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x418504u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x418508: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x418508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x41850c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x41850cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_418510:
    // 0x418510: 0x3e00008  jr          $ra
    ctx->pc = 0x418510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418510u;
        // 0x418514: 0xa0c5000b  sb          $a1, 0xB($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418518u;
}
