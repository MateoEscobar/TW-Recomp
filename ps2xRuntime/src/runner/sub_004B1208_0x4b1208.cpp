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

// Function: sub_004B1208
// Address: 0x4b1208 - 0x4b12d0
void sub_004B1208_0x4b1208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1208_0x4b1208");
#endif

    switch (ctx->pc) {
        case 0x4b1208u: goto label_4b1208;
        case 0x4b120cu: goto label_4b120c;
        case 0x4b1210u: goto label_4b1210;
        case 0x4b1214u: goto label_4b1214;
        case 0x4b1218u: goto label_4b1218;
        case 0x4b121cu: goto label_4b121c;
        case 0x4b1220u: goto label_4b1220;
        case 0x4b1224u: goto label_4b1224;
        case 0x4b1228u: goto label_4b1228;
        case 0x4b122cu: goto label_4b122c;
        case 0x4b1230u: goto label_4b1230;
        case 0x4b1234u: goto label_4b1234;
        case 0x4b1238u: goto label_4b1238;
        case 0x4b123cu: goto label_4b123c;
        case 0x4b1240u: goto label_4b1240;
        case 0x4b1244u: goto label_4b1244;
        case 0x4b1248u: goto label_4b1248;
        case 0x4b124cu: goto label_4b124c;
        case 0x4b1250u: goto label_4b1250;
        case 0x4b1254u: goto label_4b1254;
        case 0x4b1258u: goto label_4b1258;
        case 0x4b125cu: goto label_4b125c;
        case 0x4b1260u: goto label_4b1260;
        case 0x4b1264u: goto label_4b1264;
        case 0x4b1268u: goto label_4b1268;
        case 0x4b126cu: goto label_4b126c;
        case 0x4b1270u: goto label_4b1270;
        case 0x4b1274u: goto label_4b1274;
        case 0x4b1278u: goto label_4b1278;
        case 0x4b127cu: goto label_4b127c;
        case 0x4b1280u: goto label_4b1280;
        case 0x4b1284u: goto label_4b1284;
        case 0x4b1288u: goto label_4b1288;
        case 0x4b128cu: goto label_4b128c;
        case 0x4b1290u: goto label_4b1290;
        case 0x4b1294u: goto label_4b1294;
        case 0x4b1298u: goto label_4b1298;
        case 0x4b129cu: goto label_4b129c;
        case 0x4b12a0u: goto label_4b12a0;
        case 0x4b12a4u: goto label_4b12a4;
        case 0x4b12a8u: goto label_4b12a8;
        case 0x4b12acu: goto label_4b12ac;
        case 0x4b12b0u: goto label_4b12b0;
        case 0x4b12b4u: goto label_4b12b4;
        case 0x4b12b8u: goto label_4b12b8;
        case 0x4b12bcu: goto label_4b12bc;
        case 0x4b12c0u: goto label_4b12c0;
        case 0x4b12c4u: goto label_4b12c4;
        case 0x4b12c8u: goto label_4b12c8;
        case 0x4b12ccu: goto label_4b12cc;
        default: break;
    }

    ctx->pc = 0x4b1208u;

label_4b1208:
    // 0x4b1208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b1208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b120c:
    // 0x4b120c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b1210:
    // 0x4b1210: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b1210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b1214:
    // 0x4b1214: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b1214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b1218:
    // 0x4b1218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b1218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b121c:
    // 0x4b121c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b1220:
    // 0x4b1220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b1224:
    // 0x4b1224: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b1224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b1228:
    // 0x4b1228: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4b1228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4b122c:
    // 0x4b122c: 0x40f809  jalr        $v0
label_4b1230:
    if (ctx->pc == 0x4B1230u) {
        ctx->pc = 0x4B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B122Cu;
        // 0x4b1230: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1234u;
        goto label_4b1234;
    }
    ctx->pc = 0x4B122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1234u);
        ctx->pc = 0x4B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B122Cu;
        // 0x4b1230: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B122Cu, 0x4B1234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1234u;
label_4b1234:
    // 0x4b1234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1238:
    // 0x4b1238: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_4b123c:
    if (ctx->pc == 0x4B123Cu) {
        ctx->pc = 0x4B123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1238u;
        // 0x4b123c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1240u;
        goto label_4b1240;
    }
    ctx->pc = 0x4B1238u;
    {
        const bool branch_taken_0x4b1238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1238u;
        // 0x4b123c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1238) {
            ctx->pc = 0x4B12B8u;
            goto label_4b12b8;
        }
    }
    ctx->pc = 0x4B1240u;
label_4b1240:
    // 0x4b1240: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_4b1244:
    if (ctx->pc == 0x4B1244u) {
        ctx->pc = 0x4B1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1240u;
        // 0x4b1244: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1248u;
        goto label_4b1248;
    }
    ctx->pc = 0x4B1240u;
    {
        const bool branch_taken_0x4b1240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1240u;
        // 0x4b1244: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1240) {
            ctx->pc = 0x4B1250u;
            goto label_4b1250;
        }
    }
    ctx->pc = 0x4B1248u;
label_4b1248:
    // 0x4b1248: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_4b124c:
    if (ctx->pc == 0x4B124Cu) {
        ctx->pc = 0x4B1250u;
        goto label_4b1250;
    }
    ctx->pc = 0x4B1248u;
    {
        const bool branch_taken_0x4b1248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1248) {
            ctx->pc = 0x4B1274u;
            goto label_4b1274;
        }
    }
    ctx->pc = 0x4B1250u;
label_4b1250:
    // 0x4b1250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b1254:
    // 0x4b1254: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x4b1254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_4b1258:
    // 0x4b1258: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x4b1258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_4b125c:
    // 0x4b125c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4b1260:
    // 0x4b1260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b1260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1264:
    // 0x4b1264: 0xc12c392  jal         func_4B0E48
label_4b1268:
    if (ctx->pc == 0x4B1268u) {
        ctx->pc = 0x4B1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1264u;
        // 0x4b1268: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B126Cu;
        goto label_4b126c;
    }
    ctx->pc = 0x4B1264u;
    SET_GPR_U32(ctx, 31, 0x4B126Cu);
    ctx->pc = 0x4B1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1264u;
    // 0x4b1268: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4B1264u, 0x4B126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B126Cu;
label_4b126c:
    // 0x4b126c: 0x1000000c  b           . + 4 + (0xC << 2)
label_4b1270:
    if (ctx->pc == 0x4B1270u) {
        ctx->pc = 0x4B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B126Cu;
        // 0x4b1270: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1274u;
        goto label_4b1274;
    }
    ctx->pc = 0x4B126Cu;
    {
        const bool branch_taken_0x4b126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B126Cu;
        // 0x4b1270: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b126c) {
            ctx->pc = 0x4B12A0u;
            goto label_4b12a0;
        }
    }
    ctx->pc = 0x4B1274u;
label_4b1274:
    // 0x4b1274: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4b1274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4b1278:
    // 0x4b1278: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x4b1278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_4b127c:
    // 0x4b127c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b127cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4b1280:
    // 0x4b1280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b1280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b1284:
    // 0x4b1284: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b1288:
    // 0x4b1288: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x4b1288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4b128c:
    // 0x4b128c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b128cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b1290:
    // 0x4b1290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b1294:
    // 0x4b1294: 0xc12c392  jal         func_4B0E48
label_4b1298:
    if (ctx->pc == 0x4B1298u) {
        ctx->pc = 0x4B1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1294u;
        // 0x4b1298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B129Cu;
        goto label_4b129c;
    }
    ctx->pc = 0x4B1294u;
    SET_GPR_U32(ctx, 31, 0x4B129Cu);
    ctx->pc = 0x4B1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1294u;
    // 0x4b1298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4B1294u, 0x4B129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B129Cu;
label_4b129c:
    // 0x4b129c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4b129cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_4b12a0:
    // 0x4b12a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b12a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b12a4:
    // 0x4b12a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4b12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4b12a8:
    // 0x4b12a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4b12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4b12ac:
    // 0x4b12ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4b12acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4b12b0:
    // 0x4b12b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4b12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4b12b4:
    // 0x4b12b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4b12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4b12b8:
    // 0x4b12b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b12b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b12bc:
    // 0x4b12bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b12bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b12c0:
    // 0x4b12c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b12c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b12c4:
    // 0x4b12c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b12c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b12c8:
    // 0x4b12c8: 0x3e00008  jr          $ra
label_4b12cc:
    if (ctx->pc == 0x4B12CCu) {
        ctx->pc = 0x4B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12C8u;
        // 0x4b12cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B12D0u;
        goto label_fallthrough_0x4b12c8;
    }
    ctx->pc = 0x4B12C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12C8u;
        // 0x4b12cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B12C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b12c8:
    ctx->pc = 0x4B12D0u;
}
