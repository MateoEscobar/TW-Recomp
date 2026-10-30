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

// Function: sub_004D2358
// Address: 0x4d2358 - 0x4d27d8
void sub_004D2358_0x4d2358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2358_0x4d2358");
#endif

    switch (ctx->pc) {
        case 0x4d239cu: goto label_4d239c;
        default: break;
    }

    ctx->pc = 0x4d2358u;

    // 0x4d2358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d2358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d235c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x4d235cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x4d2360: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4d2360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4d2364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d2364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2368: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4d2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4d236c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d236cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2370: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4d2370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4d2374: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d2374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2378: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4d2378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d237c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d2380: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4d2380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2384: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4d2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4d2388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4d2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d238c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4d238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x4d2390: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4d2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x4d2394: 0xc13476e  jal         func_4D1DB8
    ctx->pc = 0x4D2394u;
    SET_GPR_U32(ctx, 31, 0x4D239Cu);
    ctx->pc = 0x4D2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2394u;
    // 0x4d2398: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1DB8u, 0x4D2394u, 0x4D239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D239Cu;
label_4d239c:
    // 0x4d239c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x4d239cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d23a0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x4d23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4d23a4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x4d23a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d23a8: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x4d23a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x4d23ac: 0x93a50004  lbu         $a1, 0x4($sp)
    ctx->pc = 0x4d23acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d23b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d23b4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4d23b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d23b8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x4d23b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x4d23bc: 0x93a60005  lbu         $a2, 0x5($sp)
    ctx->pc = 0x4d23bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x4d23c0: 0x93a70008  lbu         $a3, 0x8($sp)
    ctx->pc = 0x4d23c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d23c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d23c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d23c8: 0x93a80009  lbu         $t0, 0x9($sp)
    ctx->pc = 0x4d23c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x4d23cc: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x4d23ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d23d0: 0x93a4000d  lbu         $a0, 0xD($sp)
    ctx->pc = 0x4d23d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 13)));
    // 0x4d23d4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x4d23d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4d23d8: 0x93a9000c  lbu         $t1, 0xC($sp)
    ctx->pc = 0x4d23d8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4d23dc: 0x93aa0002  lbu         $t2, 0x2($sp)
    ctx->pc = 0x4d23dcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x4d23e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d23e4: 0xa2250002  sb          $a1, 0x2($s1)
    ctx->pc = 0x4d23e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d23e8: 0x93a50006  lbu         $a1, 0x6($sp)
    ctx->pc = 0x4d23e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x4d23ec: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x4d23ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4d23f0: 0x93ab0003  lbu         $t3, 0x3($sp)
    ctx->pc = 0x4d23f0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x4d23f4: 0x93ac0007  lbu         $t4, 0x7($sp)
    ctx->pc = 0x4d23f4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x4d23f8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d23fc: 0xa2260003  sb          $a2, 0x3($s1)
    ctx->pc = 0x4d23fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2400: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x4d2400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d2404: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d2404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d2408: 0xa2270004  sb          $a3, 0x4($s1)
    ctx->pc = 0x4d2408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d240c: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x4d240cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x4d2410: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d2410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d2414: 0xa2280005  sb          $t0, 0x5($s1)
    ctx->pc = 0x4d2414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d2418: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x4d2418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x4d241c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d241cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d2420: 0xa2290006  sb          $t1, 0x6($s1)
    ctx->pc = 0x4d2420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d2424: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x4d2424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x4d2428: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d2428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d242c: 0xa2240007  sb          $a0, 0x7($s1)
    ctx->pc = 0x4d242cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2430: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x4d2430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d2434: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d2434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d2438: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x4d2438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x4d243c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4d243cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x4d2440: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d2440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d2444: 0xa06b0001  sb          $t3, 0x1($v1)
    ctx->pc = 0x4d2444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x4d2448: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x4d2448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x4d244c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d2450: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4d2450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d2454: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x4d2454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x4d2458: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d2458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d245c: 0xa06c0003  sb          $t4, 0x3($v1)
    ctx->pc = 0x4d245cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x4d2460: 0x9205000c  lbu         $a1, 0xC($s0)
    ctx->pc = 0x4d2460u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d2464: 0x93a2000a  lbu         $v0, 0xA($sp)
    ctx->pc = 0x4d2464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x4d2468: 0x93a4000b  lbu         $a0, 0xB($sp)
    ctx->pc = 0x4d2468u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
    // 0x4d246c: 0x93a6000e  lbu         $a2, 0xE($sp)
    ctx->pc = 0x4d246cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x4d2470: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d2474: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x4d2474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d2478: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x4d2478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x4d247c: 0x93a5000f  lbu         $a1, 0xF($sp)
    ctx->pc = 0x4d247cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 15)));
    // 0x4d2480: 0x93a70018  lbu         $a3, 0x18($sp)
    ctx->pc = 0x4d2480u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2484: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d2484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2488: 0x93a80019  lbu         $t0, 0x19($sp)
    ctx->pc = 0x4d2488u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x4d248c: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x4d248cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2490: 0x93a4002d  lbu         $a0, 0x2D($sp)
    ctx->pc = 0x4d2490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x4d2494: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x4d2494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x4d2498: 0x93a9002c  lbu         $t1, 0x2C($sp)
    ctx->pc = 0x4d2498u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4d249c: 0x93aa0010  lbu         $t2, 0x10($sp)
    ctx->pc = 0x4d249cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d24a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d24a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d24a4: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x4d24a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d24a8: 0x93a60014  lbu         $a2, 0x14($sp)
    ctx->pc = 0x4d24a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4d24ac: 0x9202000f  lbu         $v0, 0xF($s0)
    ctx->pc = 0x4d24acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x4d24b0: 0x93ab0011  lbu         $t3, 0x11($sp)
    ctx->pc = 0x4d24b0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x4d24b4: 0x93ac0015  lbu         $t4, 0x15($sp)
    ctx->pc = 0x4d24b4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x4d24b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d24b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d24bc: 0xa0650007  sb          $a1, 0x7($v1)
    ctx->pc = 0x4d24bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d24c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d24c4: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x4d24c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d24c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d24c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d24cc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x4d24ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d24d0: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x4d24d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x4d24d4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d24d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d24d8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x4d24d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d24dc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x4d24dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4d24e0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d24e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d24e4: 0xa0690002  sb          $t1, 0x2($v1)
    ctx->pc = 0x4d24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d24e8: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x4d24e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x4d24ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d24f0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x4d24f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d24f4: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x4d24f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d24f8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d24f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d24fc: 0xa06a0004  sb          $t2, 0x4($v1)
    ctx->pc = 0x4d24fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 10));
    // 0x4d2500: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x4d2500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x4d2504: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d2504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d2508: 0xa06b0005  sb          $t3, 0x5($v1)
    ctx->pc = 0x4d2508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x4d250c: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4d250cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4d2510: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d2510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d2514: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x4d2514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2518: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x4d2518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x4d251c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d251cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d2520: 0xa06c0007  sb          $t4, 0x7($v1)
    ctx->pc = 0x4d2520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x4d2524: 0x92060018  lbu         $a2, 0x18($s0)
    ctx->pc = 0x4d2524u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4d2528: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d252c: 0x93a2001a  lbu         $v0, 0x1A($sp)
    ctx->pc = 0x4d252cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x4d2530: 0x93a4001b  lbu         $a0, 0x1B($sp)
    ctx->pc = 0x4d2530u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
    // 0x4d2534: 0x93a5002e  lbu         $a1, 0x2E($sp)
    ctx->pc = 0x4d2534u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x4d2538: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d253c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4d253cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d2540: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x4d2540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x4d2544: 0x93a6002f  lbu         $a2, 0x2F($sp)
    ctx->pc = 0x4d2544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x4d2548: 0x93a70012  lbu         $a3, 0x12($sp)
    ctx->pc = 0x4d2548u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x4d254c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2550: 0x93a80013  lbu         $t0, 0x13($sp)
    ctx->pc = 0x4d2550u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x4d2554: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x4d2554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2558: 0x93a40017  lbu         $a0, 0x17($sp)
    ctx->pc = 0x4d2558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x4d255c: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x4d255cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4d2560: 0x93a90016  lbu         $t1, 0x16($sp)
    ctx->pc = 0x4d2560u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x4d2564: 0x93aa001c  lbu         $t2, 0x1C($sp)
    ctx->pc = 0x4d2564u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4d2568: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d2568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d256c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4d256cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d2570: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x4d2570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2574: 0x9202001b  lbu         $v0, 0x1B($s0)
    ctx->pc = 0x4d2574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x4d2578: 0x93ab001d  lbu         $t3, 0x1D($sp)
    ctx->pc = 0x4d2578u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x4d257c: 0x93ac0021  lbu         $t4, 0x21($sp)
    ctx->pc = 0x4d257cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x4d2580: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d2580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d2584: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x4d2584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2588: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x4d2588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4d258c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d2590: 0xa0670004  sb          $a3, 0x4($v1)
    ctx->pc = 0x4d2590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d2594: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x4d2594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x4d2598: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d2598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d259c: 0xa0680005  sb          $t0, 0x5($v1)
    ctx->pc = 0x4d259cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d25a0: 0x9202001e  lbu         $v0, 0x1E($s0)
    ctx->pc = 0x4d25a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x4d25a4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d25a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d25a8: 0xa0690006  sb          $t1, 0x6($v1)
    ctx->pc = 0x4d25a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d25ac: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x4d25acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x4d25b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d25b4: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x4d25b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d25b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d25b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d25bc: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x4d25bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4d25c0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d25c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d25c4: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x4d25c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x4d25c8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x4d25c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x4d25cc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d25ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d25d0: 0xa06b0001  sb          $t3, 0x1($v1)
    ctx->pc = 0x4d25d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x4d25d4: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4d25d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4d25d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d25d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d25dc: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4d25dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d25e0: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x4d25e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x4d25e4: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d25e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d25e8: 0xa06c0003  sb          $t4, 0x3($v1)
    ctx->pc = 0x4d25e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x4d25ec: 0x92050024  lbu         $a1, 0x24($s0)
    ctx->pc = 0x4d25ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4d25f0: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x4d25f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d25f4: 0x93a40031  lbu         $a0, 0x31($sp)
    ctx->pc = 0x4d25f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x4d25f8: 0x93a60034  lbu         $a2, 0x34($sp)
    ctx->pc = 0x4d25f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4d25fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d2600: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x4d2600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d2604: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x4d2604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x4d2608: 0x93a50035  lbu         $a1, 0x35($sp)
    ctx->pc = 0x4d2608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 53)));
    // 0x4d260c: 0x93a7001e  lbu         $a3, 0x1E($sp)
    ctx->pc = 0x4d260cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x4d2610: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2614: 0x93a8001f  lbu         $t0, 0x1F($sp)
    ctx->pc = 0x4d2614u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x4d2618: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x4d2618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d261c: 0x93a40023  lbu         $a0, 0x23($sp)
    ctx->pc = 0x4d261cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x4d2620: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x4d2620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x4d2624: 0x93a90022  lbu         $t1, 0x22($sp)
    ctx->pc = 0x4d2624u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x4d2628: 0x93aa0032  lbu         $t2, 0x32($sp)
    ctx->pc = 0x4d2628u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x4d262c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d2630: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x4d2630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2634: 0x93a60036  lbu         $a2, 0x36($sp)
    ctx->pc = 0x4d2634u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x4d2638: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x4d2638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x4d263c: 0x93ab0033  lbu         $t3, 0x33($sp)
    ctx->pc = 0x4d263cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 51)));
    // 0x4d2640: 0x93ac0037  lbu         $t4, 0x37($sp)
    ctx->pc = 0x4d2640u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
    // 0x4d2644: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d2644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d2648: 0xa0650007  sb          $a1, 0x7($v1)
    ctx->pc = 0x4d2648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d264c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d2650: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x4d2650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4d2654: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d2654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d2658: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x4d2658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d265c: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x4d265cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x4d2660: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d2660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d2664: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x4d2664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d2668: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x4d2668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x4d266c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d266cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d2670: 0xa0690002  sb          $t1, 0x2($v1)
    ctx->pc = 0x4d2670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d2674: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x4d2674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x4d2678: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d2678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d267c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x4d267cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2680: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x4d2680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4d2684: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d2684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d2688: 0xa06a0004  sb          $t2, 0x4($v1)
    ctx->pc = 0x4d2688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 10));
    // 0x4d268c: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x4d268cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x4d2690: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d2690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d2694: 0xa06b0005  sb          $t3, 0x5($v1)
    ctx->pc = 0x4d2694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x4d2698: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x4d2698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x4d269c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d269cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d26a0: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x4d26a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d26a4: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x4d26a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x4d26a8: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d26a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d26ac: 0xa06c0007  sb          $t4, 0x7($v1)
    ctx->pc = 0x4d26acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x4d26b0: 0x92060030  lbu         $a2, 0x30($s0)
    ctx->pc = 0x4d26b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4d26b4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d26b8: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x4d26b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4d26bc: 0x93a40025  lbu         $a0, 0x25($sp)
    ctx->pc = 0x4d26bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 37)));
    // 0x4d26c0: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x4d26c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d26c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d26c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4d26c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d26cc: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x4d26ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x4d26d0: 0x93a60029  lbu         $a2, 0x29($sp)
    ctx->pc = 0x4d26d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x4d26d4: 0x93a70038  lbu         $a3, 0x38($sp)
    ctx->pc = 0x4d26d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d26d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d26dc: 0x93a80039  lbu         $t0, 0x39($sp)
    ctx->pc = 0x4d26dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
    // 0x4d26e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x4d26e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d26e4: 0x93a4003d  lbu         $a0, 0x3D($sp)
    ctx->pc = 0x4d26e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x4d26e8: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x4d26e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x4d26ec: 0x93a9003c  lbu         $t1, 0x3C($sp)
    ctx->pc = 0x4d26ecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x4d26f0: 0x93aa0026  lbu         $t2, 0x26($sp)
    ctx->pc = 0x4d26f0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 38)));
    // 0x4d26f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d26f8: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4d26f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d26fc: 0x93a5002a  lbu         $a1, 0x2A($sp)
    ctx->pc = 0x4d26fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
    // 0x4d2700: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x4d2700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    // 0x4d2704: 0x93ab0027  lbu         $t3, 0x27($sp)
    ctx->pc = 0x4d2704u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 39)));
    // 0x4d2708: 0x93ac002b  lbu         $t4, 0x2B($sp)
    ctx->pc = 0x4d2708u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 43)));
    // 0x4d270c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d270cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d2710: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x4d2710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2714: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x4d2714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x4d2718: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d2718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d271c: 0xa0670004  sb          $a3, 0x4($v1)
    ctx->pc = 0x4d271cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d2720: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x4d2720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x4d2724: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d2724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d2728: 0xa0680005  sb          $t0, 0x5($v1)
    ctx->pc = 0x4d2728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d272c: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x4d272cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x4d2730: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d2730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d2734: 0xa0690006  sb          $t1, 0x6($v1)
    ctx->pc = 0x4d2734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d2738: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4d2738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d273c: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x4d273cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x4d2740: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d2740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d2744: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d2744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2748: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x4d2748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d274c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4d2750: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x4d2750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4d2754: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4d2754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d2758: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d2758u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d275c: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x4d275cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x4d2760: 0x92020039  lbu         $v0, 0x39($s0)
    ctx->pc = 0x4d2760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x4d2764: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d2764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d2768: 0xa06b0001  sb          $t3, 0x1($v1)
    ctx->pc = 0x4d2768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x4d276c: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x4d276cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x4d2770: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d2770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d2774: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x4d2774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d2778: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x4d2778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x4d277c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d277cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d2780: 0xa06c0003  sb          $t4, 0x3($v1)
    ctx->pc = 0x4d2780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x4d2784: 0x9206003c  lbu         $a2, 0x3C($s0)
    ctx->pc = 0x4d2784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4d2788: 0x93a2003a  lbu         $v0, 0x3A($sp)
    ctx->pc = 0x4d2788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 58)));
    // 0x4d278c: 0x93a4003b  lbu         $a0, 0x3B($sp)
    ctx->pc = 0x4d278cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
    // 0x4d2790: 0x93a5003e  lbu         $a1, 0x3E($sp)
    ctx->pc = 0x4d2790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x4d2794: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d2794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d2798: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x4d2798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d279c: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x4d279cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x4d27a0: 0x93a6003f  lbu         $a2, 0x3F($sp)
    ctx->pc = 0x4d27a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x4d27a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d27a8: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x4d27a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d27ac: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x4d27acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x4d27b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d27b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d27b4: 0xa0650006  sb          $a1, 0x6($v1)
    ctx->pc = 0x4d27b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d27b8: 0x9202003f  lbu         $v0, 0x3F($s0)
    ctx->pc = 0x4d27b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x4d27bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4d27bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d27c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d27c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d27c4: 0xa0660007  sb          $a2, 0x7($v1)
    ctx->pc = 0x4d27c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d27c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D27C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D27C8u;
        // 0x4d27cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D27C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D27D0u;
    // 0x4d27d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4d27d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4d27d4: 0x0  nop
    ctx->pc = 0x4d27d4u;
    // NOP
    ctx->pc = 0x4d27d8u;
}
