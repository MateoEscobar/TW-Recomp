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

// Function: sub_0017E490
// Address: 0x17e490 - 0x17e680
void sub_0017E490_0x17e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E490_0x17e490");
#endif

    switch (ctx->pc) {
        case 0x17e490u: goto label_17e490;
        case 0x17e494u: goto label_17e494;
        case 0x17e498u: goto label_17e498;
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4a0u: goto label_17e4a0;
        case 0x17e4a4u: goto label_17e4a4;
        case 0x17e4a8u: goto label_17e4a8;
        case 0x17e4acu: goto label_17e4ac;
        case 0x17e4b0u: goto label_17e4b0;
        case 0x17e4b4u: goto label_17e4b4;
        case 0x17e4b8u: goto label_17e4b8;
        case 0x17e4bcu: goto label_17e4bc;
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4c4u: goto label_17e4c4;
        case 0x17e4c8u: goto label_17e4c8;
        case 0x17e4ccu: goto label_17e4cc;
        case 0x17e4d0u: goto label_17e4d0;
        case 0x17e4d4u: goto label_17e4d4;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4dcu: goto label_17e4dc;
        case 0x17e4e0u: goto label_17e4e0;
        case 0x17e4e4u: goto label_17e4e4;
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e4f0u: goto label_17e4f0;
        case 0x17e4f4u: goto label_17e4f4;
        case 0x17e4f8u: goto label_17e4f8;
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e500u: goto label_17e500;
        case 0x17e504u: goto label_17e504;
        case 0x17e508u: goto label_17e508;
        case 0x17e50cu: goto label_17e50c;
        case 0x17e510u: goto label_17e510;
        case 0x17e514u: goto label_17e514;
        case 0x17e518u: goto label_17e518;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e520u: goto label_17e520;
        case 0x17e524u: goto label_17e524;
        case 0x17e528u: goto label_17e528;
        case 0x17e52cu: goto label_17e52c;
        case 0x17e530u: goto label_17e530;
        case 0x17e534u: goto label_17e534;
        case 0x17e538u: goto label_17e538;
        case 0x17e53cu: goto label_17e53c;
        case 0x17e540u: goto label_17e540;
        case 0x17e544u: goto label_17e544;
        case 0x17e548u: goto label_17e548;
        case 0x17e54cu: goto label_17e54c;
        case 0x17e550u: goto label_17e550;
        case 0x17e554u: goto label_17e554;
        case 0x17e558u: goto label_17e558;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e560u: goto label_17e560;
        case 0x17e564u: goto label_17e564;
        case 0x17e568u: goto label_17e568;
        case 0x17e56cu: goto label_17e56c;
        case 0x17e570u: goto label_17e570;
        case 0x17e574u: goto label_17e574;
        case 0x17e578u: goto label_17e578;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e580u: goto label_17e580;
        case 0x17e584u: goto label_17e584;
        case 0x17e588u: goto label_17e588;
        case 0x17e58cu: goto label_17e58c;
        case 0x17e590u: goto label_17e590;
        case 0x17e594u: goto label_17e594;
        case 0x17e598u: goto label_17e598;
        case 0x17e59cu: goto label_17e59c;
        case 0x17e5a0u: goto label_17e5a0;
        case 0x17e5a4u: goto label_17e5a4;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5acu: goto label_17e5ac;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5b8u: goto label_17e5b8;
        case 0x17e5bcu: goto label_17e5bc;
        case 0x17e5c0u: goto label_17e5c0;
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5c8u: goto label_17e5c8;
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5d0u: goto label_17e5d0;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5dcu: goto label_17e5dc;
        case 0x17e5e0u: goto label_17e5e0;
        case 0x17e5e4u: goto label_17e5e4;
        case 0x17e5e8u: goto label_17e5e8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e5fcu: goto label_17e5fc;
        case 0x17e600u: goto label_17e600;
        case 0x17e604u: goto label_17e604;
        case 0x17e608u: goto label_17e608;
        case 0x17e60cu: goto label_17e60c;
        case 0x17e610u: goto label_17e610;
        case 0x17e614u: goto label_17e614;
        case 0x17e618u: goto label_17e618;
        case 0x17e61cu: goto label_17e61c;
        case 0x17e620u: goto label_17e620;
        case 0x17e624u: goto label_17e624;
        case 0x17e628u: goto label_17e628;
        case 0x17e62cu: goto label_17e62c;
        case 0x17e630u: goto label_17e630;
        case 0x17e634u: goto label_17e634;
        case 0x17e638u: goto label_17e638;
        case 0x17e63cu: goto label_17e63c;
        case 0x17e640u: goto label_17e640;
        case 0x17e644u: goto label_17e644;
        case 0x17e648u: goto label_17e648;
        case 0x17e64cu: goto label_17e64c;
        case 0x17e650u: goto label_17e650;
        case 0x17e654u: goto label_17e654;
        case 0x17e658u: goto label_17e658;
        case 0x17e65cu: goto label_17e65c;
        case 0x17e660u: goto label_17e660;
        case 0x17e664u: goto label_17e664;
        case 0x17e668u: goto label_17e668;
        case 0x17e66cu: goto label_17e66c;
        case 0x17e670u: goto label_17e670;
        case 0x17e674u: goto label_17e674;
        case 0x17e678u: goto label_17e678;
        case 0x17e67cu: goto label_17e67c;
        default: break;
    }

    ctx->pc = 0x17e490u;

label_17e490:
    // 0x17e490: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x17e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_17e494:
    // 0x17e494: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x17e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_17e498:
    // 0x17e498: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x17e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_17e49c:
    // 0x17e49c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x17e49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_17e4a0:
    // 0x17e4a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17e4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_17e4a4:
    // 0x17e4a4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x17e4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_17e4a8:
    // 0x17e4a8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x17e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_17e4ac:
    // 0x17e4ac: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x17e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_17e4b0:
    // 0x17e4b0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x17e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_17e4b4:
    // 0x17e4b4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x17e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_17e4b8:
    // 0x17e4b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17e4bc:
    // 0x17e4bc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x17e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_17e4c0:
    // 0x17e4c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17e4c4:
    // 0x17e4c4: 0xc051048  jal         func_144120
label_17e4c8:
    if (ctx->pc == 0x17E4C8u) {
        ctx->pc = 0x17E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4C4u;
        // 0x17e4c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4CCu;
        goto label_17e4cc;
    }
    ctx->pc = 0x17E4C4u;
    SET_GPR_U32(ctx, 31, 0x17E4CCu);
    ctx->pc = 0x17E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4C4u;
    // 0x17e4c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x17E4C4u, 0x17E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4CCu;
label_17e4cc:
    // 0x17e4cc: 0xae02cce8  sw          $v0, -0x3318($s0)
    ctx->pc = 0x17e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954216), GPR_U32(ctx, 2));
label_17e4d0:
    // 0x17e4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e4d4:
    // 0x17e4d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x17e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17e4d8:
    // 0x17e4d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x17e4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17e4dc:
    // 0x17e4dc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e4e0:
    // 0x17e4e0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_17e4e4:
    // 0x17e4e4: 0xa7a5004c  sh          $a1, 0x4C($sp)
    ctx->pc = 0x17e4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 5));
label_17e4e8:
    // 0x17e4e8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_17e4ec:
    // 0x17e4ec: 0xa7a3004e  sh          $v1, 0x4E($sp)
    ctx->pc = 0x17e4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 3));
label_17e4f0:
    // 0x17e4f0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_17e4f4:
    // 0x17e4f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_17e4f8:
    // 0x17e4f8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x17e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_17e4fc:
    // 0x17e4fc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x17e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_17e500:
    // 0x17e500: 0x8d0627e4  lw          $a2, 0x27E4($t0)
    ctx->pc = 0x17e500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10212)));
label_17e504:
    // 0x17e504: 0x8ce5b9b8  lw          $a1, -0x4648($a3)
    ctx->pc = 0x17e504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949304)));
label_17e508:
    // 0x17e508: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17e50c:
    // 0x17e50c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_17e510:
    // 0x17e510: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_17e514:
    // 0x17e514: 0x60f809  jalr        $v1
label_17e518:
    if (ctx->pc == 0x17E518u) {
        ctx->pc = 0x17E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E514u;
        // 0x17e518: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E51Cu;
        goto label_17e51c;
    }
    ctx->pc = 0x17E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17E51Cu);
        ctx->pc = 0x17E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E514u;
        // 0x17e518: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E514u, 0x17E51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E51Cu;
label_17e51c:
    // 0x17e51c: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_17e520:
    if (ctx->pc == 0x17E520u) {
        ctx->pc = 0x17E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E51Cu;
        // 0x17e520: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E524u;
        goto label_17e524;
    }
    ctx->pc = 0x17E51Cu;
    {
        const bool branch_taken_0x17e51c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E51Cu;
        // 0x17e520: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e51c) {
            ctx->pc = 0x17E62Cu;
            goto label_17e62c;
        }
    }
    ctx->pc = 0x17E524u;
label_17e524:
    // 0x17e524: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_17e528:
    // 0x17e528: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x17e528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17e52c:
    // 0x17e52c: 0x24160027  addiu       $s6, $zero, 0x27
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_17e530:
    // 0x17e530: 0x2415ffe1  addiu       $s5, $zero, -0x1F
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_17e534:
    // 0x17e534: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_17e538:
    // 0x17e538: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17e538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_17e53c:
    // 0x17e53c: 0x0  nop
    ctx->pc = 0x17e53cu;
    // NOP
label_17e540:
    // 0x17e540: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17e544:
    // 0x17e544: 0xa7a2004c  sh          $v0, 0x4C($sp)
    ctx->pc = 0x17e544u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 2));
label_17e548:
    // 0x17e548: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x17e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e54c:
    // 0x17e54c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17e54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17e550:
    // 0x17e550: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x17e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17e554:
    // 0x17e554: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x17e554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17e558:
    // 0x17e558: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x17e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e55c:
    // 0x17e55c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17e560:
    // 0x17e560: 0xc05f122  jal         func_17C488
label_17e564:
    if (ctx->pc == 0x17E564u) {
        ctx->pc = 0x17E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E560u;
        // 0x17e564: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E568u;
        goto label_17e568;
    }
    ctx->pc = 0x17E560u;
    SET_GPR_U32(ctx, 31, 0x17E568u);
    ctx->pc = 0x17E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E560u;
    // 0x17e564: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C488u, 0x17E560u, 0x17E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E568u;
label_17e568:
    // 0x17e568: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x17e568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_17e56c:
    // 0x17e56c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e570:
    // 0x17e570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e574:
    // 0x17e574: 0x0  nop
    ctx->pc = 0x17e574u;
    // NOP
label_17e578:
    // 0x17e578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17e57c:
    // 0x17e57c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17e57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17e580:
    // 0x17e580: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17e584:
    // 0x17e584: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x17e584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_17e588:
    // 0x17e588: 0xdfa30048  ld          $v1, 0x48($sp)
    ctx->pc = 0x17e588u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_17e58c:
    // 0x17e58c: 0x3063001e  andi        $v1, $v1, 0x1E
    ctx->pc = 0x17e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30);
label_17e590:
    // 0x17e590: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_17e594:
    // 0x17e594: 0x3c2200a  movz        $a0, $fp, $v0
    ctx->pc = 0x17e594u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 30));
label_17e598:
    // 0x17e598: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x17e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_17e59c:
    // 0x17e59c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x17e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e5a0:
    // 0x17e5a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17e5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_17e5a4:
    // 0x17e5a4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x17e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17e5a8:
    // 0x17e5a8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x17e5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_17e5ac:
    // 0x17e5ac: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x17e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e5b0:
    // 0x17e5b0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_17e5b4:
    if (ctx->pc == 0x17E5B4u) {
        ctx->pc = 0x17E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5B0u;
        // 0x17e5b4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5B8u;
        goto label_17e5b8;
    }
    ctx->pc = 0x17E5B0u;
    {
        const bool branch_taken_0x17e5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5B0u;
        // 0x17e5b4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5b0) {
            ctx->pc = 0x17E60Cu;
            goto label_17e60c;
        }
    }
    ctx->pc = 0x17E5B8u;
label_17e5b8:
    // 0x17e5b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x17e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_17e5bc:
    // 0x17e5bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_17e5c0:
    if (ctx->pc == 0x17E5C0u) {
        ctx->pc = 0x17E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5BCu;
        // 0x17e5c0: 0x97a2004c  lhu         $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5C4u;
        goto label_17e5c4;
    }
    ctx->pc = 0x17E5BCu;
    {
        const bool branch_taken_0x17e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5BCu;
        // 0x17e5c0: 0x97a2004c  lhu         $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5bc) {
            ctx->pc = 0x17E60Cu;
            goto label_17e60c;
        }
    }
    ctx->pc = 0x17E5C4u;
label_17e5c4:
    // 0x17e5c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_17e5c8:
    if (ctx->pc == 0x17E5C8u) {
        ctx->pc = 0x17E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5C4u;
        // 0x17e5c8: 0x8e84cce4  lw          $a0, -0x331C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5CCu;
        goto label_17e5cc;
    }
    ctx->pc = 0x17E5C4u;
    {
        const bool branch_taken_0x17e5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5C4u;
        // 0x17e5c8: 0x8e84cce4  lw          $a0, -0x331C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5c4) {
            ctx->pc = 0x17E610u;
            goto label_17e610;
        }
    }
    ctx->pc = 0x17E5CCu;
label_17e5cc:
    // 0x17e5cc: 0xc10d272  jal         func_4349C8
label_17e5d0:
    if (ctx->pc == 0x17E5D0u) {
        ctx->pc = 0x17E5D4u;
        goto label_17e5d4;
    }
    ctx->pc = 0x17E5CCu;
    SET_GPR_U32(ctx, 31, 0x17E5D4u);
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x17E5CCu, 0x17E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5D4u;
label_17e5d4:
    // 0x17e5d4: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x17e5d4u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17e5d8:
    // 0x17e5d8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_17e5dc:
    if (ctx->pc == 0x17E5DCu) {
        ctx->pc = 0x17E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5D8u;
        // 0x17e5dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5E0u;
        goto label_17e5e0;
    }
    ctx->pc = 0x17E5D8u;
    {
        const bool branch_taken_0x17e5d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5d8) {
            ctx->pc = 0x17E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E5D8u;
            // 0x17e5dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E5E0u;
            goto label_17e5e0;
        }
    }
    ctx->pc = 0x17E5E0u;
label_17e5e0:
    // 0x17e5e0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x17e5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17e5e4:
    // 0x17e5e4: 0xdfa30048  ld          $v1, 0x48($sp)
    ctx->pc = 0x17e5e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_17e5e8:
    // 0x17e5e8: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x17e5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_17e5ec:
    // 0x17e5ec: 0x2010  mfhi        $a0
    ctx->pc = 0x17e5ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_17e5f0:
    // 0x17e5f0: 0x2c4202a  slt         $a0, $s6, $a0
    ctx->pc = 0x17e5f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e5f4:
    // 0x17e5f4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x17e5f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_17e5f8:
    // 0x17e5f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17e5fc:
    // 0x17e5fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17e600:
    // 0x17e600: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x17e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_17e604:
    // 0x17e604: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17e604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17e608:
    // 0x17e608: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x17e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
label_17e60c:
    // 0x17e60c: 0x8e84cce4  lw          $a0, -0x331C($s4)
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954212)));
label_17e610:
    // 0x17e610: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17e614:
    // 0x17e614: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17e618:
    // 0x17e618: 0xc05f55e  jal         func_17D578
label_17e61c:
    if (ctx->pc == 0x17E61Cu) {
        ctx->pc = 0x17E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E618u;
        // 0x17e61c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E620u;
        goto label_17e620;
    }
    ctx->pc = 0x17E618u;
    SET_GPR_U32(ctx, 31, 0x17E620u);
    ctx->pc = 0x17E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E618u;
    // 0x17e61c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x17E618u, 0x17E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E620u;
label_17e620:
    // 0x17e620: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x17e620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_17e624:
    // 0x17e624: 0x5460ffc6  bnel        $v1, $zero, . + 4 + (-0x3A << 2)
label_17e628:
    if (ctx->pc == 0x17E628u) {
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E62Cu;
        goto label_17e62c;
    }
    ctx->pc = 0x17E624u;
    {
        const bool branch_taken_0x17e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e624) {
            ctx->pc = 0x17E628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E624u;
            // 0x17e628: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e540;
        }
    }
    ctx->pc = 0x17E62Cu;
label_17e62c:
    // 0x17e62c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17e630:
    // 0x17e630: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x17e630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_17e634:
    // 0x17e634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_17e638:
    // 0x17e638: 0x8c45b9b8  lw          $a1, -0x4648($v0)
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
label_17e63c:
    // 0x17e63c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17e640:
    // 0x17e640: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x17e640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_17e644:
    // 0x17e644: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x17e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17e648:
    // 0x17e648: 0x60f809  jalr        $v1
label_17e64c:
    if (ctx->pc == 0x17E64Cu) {
        ctx->pc = 0x17E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E648u;
        // 0x17e64c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E650u;
        goto label_17e650;
    }
    ctx->pc = 0x17E648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17E650u);
        ctx->pc = 0x17E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E648u;
        // 0x17e64c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E648u, 0x17E650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E650u;
label_17e650:
    // 0x17e650: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x17e650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_17e654:
    // 0x17e654: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x17e654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17e658:
    // 0x17e658: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x17e658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17e65c:
    // 0x17e65c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x17e65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17e660:
    // 0x17e660: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x17e660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17e664:
    // 0x17e664: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x17e664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17e668:
    // 0x17e668: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x17e668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17e66c:
    // 0x17e66c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e66cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17e670:
    // 0x17e670: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x17e670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17e674:
    // 0x17e674: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17e674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17e678:
    // 0x17e678: 0x3e00008  jr          $ra
label_17e67c:
    if (ctx->pc == 0x17E67Cu) {
        ctx->pc = 0x17E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E678u;
        // 0x17e67c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E680u;
        goto label_fallthrough_0x17e678;
    }
    ctx->pc = 0x17E678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E678u;
        // 0x17e67c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e678:
    ctx->pc = 0x17E680u;
}
