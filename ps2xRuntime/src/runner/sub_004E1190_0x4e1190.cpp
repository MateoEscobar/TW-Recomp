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

// Function: sub_004E1190
// Address: 0x4e1190 - 0x4e1340
void sub_004E1190_0x4e1190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1190_0x4e1190");
#endif

    switch (ctx->pc) {
        case 0x4e11e4u: goto label_4e11e4;
        case 0x4e1218u: goto label_4e1218;
        case 0x4e1270u: goto label_4e1270;
        case 0x4e12a0u: goto label_4e12a0;
        case 0x4e12fcu: goto label_4e12fc;
        case 0x4e1310u: goto label_4e1310;
        case 0x4e1320u: goto label_4e1320;
        default: break;
    }

    ctx->pc = 0x4e1190u;

    // 0x4e1190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e1190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e1194: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e1194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e1198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e119c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e119cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e11a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e11a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e11a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e11a8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e11a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e11ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e11acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e11b0: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E11B0u;
    {
        const bool branch_taken_0x4e11b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E11B0u;
        // 0x4e11b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e11b0) {
            ctx->pc = 0x4E11ECu;
            goto label_4e11ec;
        }
    }
    ctx->pc = 0x4E11B8u;
    // 0x4e11b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e11bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E11BCu;
    {
        const bool branch_taken_0x4e11bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e11bc) {
            ctx->pc = 0x4E11C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E11BCu;
            // 0x4e11c0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E11DCu;
            goto label_4e11dc;
        }
    }
    ctx->pc = 0x4E11C4u;
    // 0x4e11c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e11c8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e11cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e11ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e11d0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E11D0u;
    {
        const bool branch_taken_0x4e11d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e11d0) {
            ctx->pc = 0x4E1308u;
            goto label_4e1308;
        }
    }
    ctx->pc = 0x4E11D8u;
    // 0x4e11d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e11d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e11dc:
    // 0x4e11dc: 0xc13840e  jal         func_4E1038
    ctx->pc = 0x4E11DCu;
    SET_GPR_U32(ctx, 31, 0x4E11E4u);
    ctx->pc = 0x4E11E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E11DCu;
    // 0x4e11e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1038u, 0x4E11DCu, 0x4E11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E11E4u;
label_4e11e4:
    // 0x4e11e4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E11E4u;
    {
        const bool branch_taken_0x4e11e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E11E4u;
        // 0x4e11e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e11e4) {
            ctx->pc = 0x4E1324u;
            goto label_4e1324;
        }
    }
    ctx->pc = 0x4E11ECu;
label_4e11ec:
    // 0x4e11ec: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E11ECu;
    {
        const bool branch_taken_0x4e11ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e11ec) {
            ctx->pc = 0x4E11F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E11ECu;
            // 0x4e11f0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1220u;
            goto label_4e1220;
        }
    }
    ctx->pc = 0x4E11F4u;
    // 0x4e11f4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e11f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e11f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e11fc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e1200: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e1204: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E1204u;
    {
        const bool branch_taken_0x4e1204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1204u;
        // 0x4e1208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1204) {
            ctx->pc = 0x4E12F4u;
            goto label_4e12f4;
        }
    }
    ctx->pc = 0x4E120Cu;
    // 0x4e120c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e120cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1210: 0xc13840e  jal         func_4E1038
    ctx->pc = 0x4E1210u;
    SET_GPR_U32(ctx, 31, 0x4E1218u);
    ctx->pc = 0x4E1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1210u;
    // 0x4e1214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1038u, 0x4E1210u, 0x4E1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1218u;
label_4e1218:
    // 0x4e1218: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E1218u;
    {
        const bool branch_taken_0x4e1218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1218u;
        // 0x4e121c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1218) {
            ctx->pc = 0x4E1324u;
            goto label_4e1324;
        }
    }
    ctx->pc = 0x4E1220u;
label_4e1220:
    // 0x4e1220: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e1220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e1224: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1224u;
    {
        const bool branch_taken_0x4e1224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1224u;
        // 0x4e1228: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1224) {
            ctx->pc = 0x4E1248u;
            goto label_4e1248;
        }
    }
    ctx->pc = 0x4E122Cu;
    // 0x4e122c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e1230: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e1234: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1234u;
    {
        const bool branch_taken_0x4e1234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e1234) {
            ctx->pc = 0x4E1238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1234u;
            // 0x4e1238: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E124Cu;
            goto label_4e124c;
        }
    }
    ctx->pc = 0x4E123Cu;
    // 0x4e123c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e1240: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E1240u;
    {
        const bool branch_taken_0x4e1240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1240u;
        // 0x4e1244: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1240) {
            ctx->pc = 0x4E12B8u;
            goto label_4e12b8;
        }
    }
    ctx->pc = 0x4E1248u;
label_4e1248:
    // 0x4e1248: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e1248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e124c:
    // 0x4e124c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e1250: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E1250u;
    {
        const bool branch_taken_0x4e1250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1250) {
            ctx->pc = 0x4E1254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1250u;
            // 0x4e1254: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1290u;
            goto label_4e1290;
        }
    }
    ctx->pc = 0x4E1258u;
    // 0x4e1258: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e125c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1260: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E1260u;
    {
        const bool branch_taken_0x4e1260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1260) {
            ctx->pc = 0x4E1264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1260u;
            // 0x4e1264: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E12B8u;
            goto label_4e12b8;
        }
    }
    ctx->pc = 0x4E1268u;
    // 0x4e1268: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e126c: 0x0  nop
    ctx->pc = 0x4e126cu;
    // NOP
label_4e1270:
    // 0x4e1270: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1274: 0x0  nop
    ctx->pc = 0x4e1274u;
    // NOP
    // 0x4e1278: 0x0  nop
    ctx->pc = 0x4e1278u;
    // NOP
    // 0x4e127c: 0x0  nop
    ctx->pc = 0x4e127cu;
    // NOP
    // 0x4e1280: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1280u;
    {
        const bool branch_taken_0x4e1280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1280) {
            ctx->pc = 0x4E1284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1280u;
            // 0x4e1284: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1270;
        }
    }
    ctx->pc = 0x4E1288u;
    // 0x4e1288: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E1288u;
    {
        const bool branch_taken_0x4e1288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1288u;
        // 0x4e128c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1288) {
            ctx->pc = 0x4E12B8u;
            goto label_4e12b8;
        }
    }
    ctx->pc = 0x4E1290u;
label_4e1290:
    // 0x4e1290: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1294: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1294u;
    {
        const bool branch_taken_0x4e1294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1294u;
        // 0x4e1298: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1294) {
            ctx->pc = 0x4E12B8u;
            goto label_4e12b8;
        }
    }
    ctx->pc = 0x4E129Cu;
    // 0x4e129c: 0x0  nop
    ctx->pc = 0x4e129cu;
    // NOP
label_4e12a0:
    // 0x4e12a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e12a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e12a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e12ac: 0x0  nop
    ctx->pc = 0x4e12acu;
    // NOP
    // 0x4e12b0: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E12B0u;
    {
        const bool branch_taken_0x4e12b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E12B0u;
        // 0x4e12b4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e12b0) {
            ctx->pc = 0x4E12A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e12a0;
        }
    }
    ctx->pc = 0x4E12B8u;
label_4e12b8:
    // 0x4e12b8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e12b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e12bc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e12bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e12c0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e12c4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e12c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e12c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E12C8u;
    {
        const bool branch_taken_0x4e12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E12C8u;
        // 0x4e12cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e12c8) {
            ctx->pc = 0x4E12DCu;
            goto label_4e12dc;
        }
    }
    ctx->pc = 0x4E12D0u;
    // 0x4e12d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e12d4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e12d8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e12d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e12dc:
    // 0x4e12dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E12DCu;
    {
        const bool branch_taken_0x4e12dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E12DCu;
        // 0x4e12e0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e12dc) {
            ctx->pc = 0x4E1318u;
            goto label_4e1318;
        }
    }
    ctx->pc = 0x4E12E4u;
    // 0x4e12e4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e12e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E12E8u;
    {
        const bool branch_taken_0x4e12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e12e8) {
            ctx->pc = 0x4E12ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E12E8u;
            // 0x4e12ec: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1304u;
            goto label_4e1304;
        }
    }
    ctx->pc = 0x4E12F0u;
    // 0x4e12f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e12f4:
    // 0x4e12f4: 0xc13831a  jal         func_4E0C68
    ctx->pc = 0x4E12F4u;
    SET_GPR_U32(ctx, 31, 0x4E12FCu);
    ctx->pc = 0x4E12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E12F4u;
    // 0x4e12f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0C68u, 0x4E12F4u, 0x4E12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E12FCu;
label_4e12fc:
    // 0x4e12fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E12FCu;
    {
        const bool branch_taken_0x4e12fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E12FCu;
        // 0x4e1300: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e12fc) {
            ctx->pc = 0x4E132Cu;
            goto label_4e132c;
        }
    }
    ctx->pc = 0x4E1304u;
label_4e1304:
    // 0x4e1304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1308:
    // 0x4e1308: 0xc13831a  jal         func_4E0C68
    ctx->pc = 0x4E1308u;
    SET_GPR_U32(ctx, 31, 0x4E1310u);
    ctx->pc = 0x4E130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1308u;
    // 0x4e130c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0C68u, 0x4E1308u, 0x4E1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1310u;
label_4e1310:
    // 0x4e1310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E1310u;
    {
        const bool branch_taken_0x4e1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1310u;
        // 0x4e1314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1310) {
            ctx->pc = 0x4E132Cu;
            goto label_4e132c;
        }
    }
    ctx->pc = 0x4E1318u;
label_4e1318:
    // 0x4e1318: 0xc13840e  jal         func_4E1038
    ctx->pc = 0x4E1318u;
    SET_GPR_U32(ctx, 31, 0x4E1320u);
    ctx->pc = 0x4E131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1318u;
    // 0x4e131c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1038u, 0x4E1318u, 0x4E1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1320u;
label_4e1320:
    // 0x4e1320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e1320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1324:
    // 0x4e1324: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e1324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e1328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e132c:
    // 0x4e132c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1330: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e1330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1334: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1334u;
        // 0x4e1338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E133Cu;
    // 0x4e133c: 0x0  nop
    ctx->pc = 0x4e133cu;
    // NOP
    ctx->pc = 0x4e1340u;
}
