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

// Function: sub_002D11F8
// Address: 0x2d11f8 - 0x2d1288
void sub_002D11F8_0x2d11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D11F8_0x2d11f8");
#endif

    switch (ctx->pc) {
        case 0x2d121cu: goto label_2d121c;
        case 0x2d1254u: goto label_2d1254;
        default: break;
    }

    ctx->pc = 0x2d11f8u;

    // 0x2d11f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d11f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d11fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1200: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d1204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d120c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1210: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d1210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1214: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2D1214u;
    SET_GPR_U32(ctx, 31, 0x2D121Cu);
    ctx->pc = 0x2D1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1214u;
    // 0x2d1218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D1214u, 0x2D121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D121Cu;
label_2d121c:
    // 0x2d121c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d121cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1220: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1220u;
    {
        const bool branch_taken_0x2d1220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1220) {
            ctx->pc = 0x2D1224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1220u;
            // 0x2d1224: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1258u;
            goto label_2d1258;
        }
    }
    ctx->pc = 0x2D1228u;
    // 0x2d1228: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d122c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d1230: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1234: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d1234u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d1238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d123c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2d123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2d1240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1244: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1248: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d1248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d124c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D124Cu;
    SET_GPR_U32(ctx, 31, 0x2D1254u);
    ctx->pc = 0x2D1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D124Cu;
    // 0x2d1250: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D124Cu, 0x2D1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1254u;
label_2d1254:
    // 0x2d1254: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d1258:
    // 0x2d1258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d125c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d1260: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x2d1260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
    // 0x2d1264: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d1264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1268: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2d1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2d126c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1270: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2d1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
    // 0x2d1274: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2d1274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2d1278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d127c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D127Cu;
        // 0x2d1280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1284u;
    // 0x2d1284: 0x0  nop
    ctx->pc = 0x2d1284u;
    // NOP
    ctx->pc = 0x2d1288u;
}
